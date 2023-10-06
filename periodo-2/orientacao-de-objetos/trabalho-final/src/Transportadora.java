import java.io.BufferedReader;
import java.io.FileReader;

public class Transportadora implements ImportacaoArquivos{
    
    private BufferedReader readerConfigFile;
    private BufferedReader readerDataFile;
    private float precoNormal;
    private float precoEspresso;
    private EncomendaNormal encomendasNormais[] = new EncomendaNormal[1000];
    private int numEncN = 0;
    private float pesoTotalN = 0;
    private EncomendaExpressa encomendasExpressas[] = new EncomendaExpressa[1000];
    private int numEncE = 0;
    private float pesoTotalE = 0;
    private int numEncTotal = 0;
    private float pesoTotal = 0;

    public float getPesoTotal(){
        return this.pesoTotal;
    }

    public int getNumTotal(){
        return this.numEncTotal;
    }

    public Transportadora(String arqConfig)throws Exception{
        carregarConfiguracoes(arqConfig);
    }

    public void carregarConfiguracoes(String arqConfig)throws Exception{
        this.readerConfigFile = new BufferedReader(new FileReader(arqConfig));
        String configFileLine = readerConfigFile.readLine();
        String configElements[] = new String[3];

        for(int i = 0; i < 2; i++){
            configFileLine = readerConfigFile.readLine();
            configElements = configFileLine.split(";");
            if(configElements[1].equals("EN")){
                this.precoNormal = Float.parseFloat(configElements[2]);
            } else {
                this.precoEspresso = Float.parseFloat(configElements[2]);
            }
        }
    }

    public void importarDados(String arqDadosEntrada)throws Exception{
        int warningN = 0;
        int warningE = 0;
        this.readerDataFile = new BufferedReader(new FileReader(arqDadosEntrada));
        String configFileLine = this.readerDataFile.readLine();
        configFileLine = this.readerDataFile.readLine();
        String configElements[] = new String[6];

        while (configFileLine != null){
            configElements = configFileLine.split(";");
            if (configElements[2].equals("EN")){
                if (this.numEncN < 1000){
                    EncomendaNormal encomendaN = new EncomendaNormal(Integer.parseInt(configElements[0]), configElements[1], Float.parseFloat(configElements[4]));
                    this.encomendasNormais[numEncN] = encomendaN;
                    this.numEncN++;
                    this.pesoTotalN += Float.parseFloat(configElements[4]);
                    this.numEncTotal++;
                    this.pesoTotal += Float.parseFloat(configElements[4]);
                } else if (warningN == 0){
                    System.out.println("Erro excesso de encomendas normais.");
                    warningN = 1;
                }
            } else if (configElements[2].equals("EE")){
                if (this.numEncE < 1000){
                    EncomendaExpressa encomendaE = new EncomendaExpressa(
                        Integer.parseInt(configElements[0]),
                        configElements[1],
                        Integer.parseInt(configElements[3]),
                        Float.parseFloat(configElements[4]),
                        configElements[5]
                    );
                    this.encomendasExpressas[numEncE] = encomendaE;
                    this.numEncE++;
                    this.pesoTotalE += Float.parseFloat(configElements[4]);
                    this.numEncTotal++;
                    this.pesoTotal += Float.parseFloat(configElements[4]);
                } else if (warningN == 0){
                    System.out.println("Erro excesso de encomendas espressas.");
                    warningE = 1;
                }
            }
            configFileLine = this.readerDataFile.readLine(); 
        }
    }

    public void imprimirEncomendasNormais(){
        if (this.numEncN > 0){
            System.out.println("Numero Peso kg Preco do Frete");
            for(int i = 0; i < numEncN; i++){
                System.out.println(
                    String.format("%5d", this.encomendasNormais[i].getNumPedido()) + "  " + 
                    String.format("%6.03f", this.encomendasNormais[i].getPeso()) + " " +
                    String.format("%9.02f", this.encomendasNormais[i].calcularFrete(this.precoNormal))
                );
            }
            System.out.println("");
            System.out.println("Total de encomendas normais: " + this.numEncN);
            System.out.println("Peso total de encomendas normais: " + String.format("%.02f", this.pesoTotalN));
        } else {
            System.out.println("Nenhuma encomenda normal encontrada");
        }
    }
    
    public void imprimirEncomendasEspressas(){
        if(this.numEncE > 0){
            System.out.println("Numero Peso kg Preco do Frete");
            for(int i = 0; i < numEncE; i++){
                System.out.println(
                    String.format("%5d", this.encomendasExpressas[i].getNumPedido()) + "  " + 
                    String.format("%6.03f", this.encomendasExpressas[i].getPeso()) + " " +
                    String.format("%9.02f", this.encomendasExpressas[i].calcularFrete(this.precoNormal))
                );
            }
            System.out.println("");
            System.out.println("Total de encomendas espressas: " + this.numEncE);
            System.out.println("Peso total de encomendas espressas: " + String.format("%.02f", this.pesoTotalE));
        } else {
            System.out.println("Nenhuma encomenda espressa encontrada");
        }
    }
}