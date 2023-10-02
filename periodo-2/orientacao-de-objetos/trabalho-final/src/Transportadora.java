import java.io.BufferedReader;
import java.io.FileReader;

public class Transportadora implements ImportacaoArquivos{
    
    private BufferedReader readerConfigFile;
    private BufferedReader readerDataFile;
    private float precoNormal;
    private float precoEspresso;
    private EncomendaNormal encomendasNormais[] = new EncomendaNormal[1000];
    private int numEncN = 0;
    private EncomendaExpressa encomendasExpressas[] = new EncomendaExpressa[1000];
    private int numEncE = 0;

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
        this.readerDataFile = new BufferedReader(new FileReader(arqDadosEntrada));
        String configFileLine = this.readerDataFile.readLine();
        configFileLine = this.readerDataFile.readLine();
        String configElements[] = new String[6];

        while (configFileLine != null){
            configElements = configFileLine.split(";");
            if (configElements[2].equals("EN") && this.numEncN < 1000){
                EncomendaNormal encomendaN = new EncomendaNormal(Integer.parseInt(configElements[0]), configElements[1], Float.parseFloat(configElements[4]));
                this.encomendasNormais[numEncN] = encomendaN;
                this.numEncN++;
            } else if (configElements[2].equals("EE") && this.numEncE < 1000){
                EncomendaExpressa encomendaE = new EncomendaExpressa(
                    Integer.parseInt(configElements[0]),
                    configElements[1],
                    Integer.parseInt(configElements[3]),
                    Float.parseFloat(configElements[4]),
                    configElements[5]
                );
                this.encomendasExpressas[numEncE] = encomendaE;
                this.numEncE++;
            } else {
                System.out.println("Erro excesso de encomendas");
            }
            configFileLine = this.readerDataFile.readLine();
        }
    }

    public void imprimirEncomendasNormais(){
        for(int i = 0; i < numEncN; i++){
            System.out.println(
                this.encomendasNormais[i].getNumPedido() + " " + 
                this.encomendasNormais[i].getPeso() + " " +
                this.encomendasNormais[i].calcularFrete(this.precoNormal)
            );
        }
    }
    
    public void imprimirEncomendasEspressas(){
        for(int i = 0; i < numEncE; i++){
            System.out.println(
                this.encomendasExpressas[i].getNumPedido() + " " + 
                this.encomendasExpressas[i].getPeso() + " " +
                this.encomendasExpressas[i].calcularFrete(this.precoEspresso)
            );
        }
    }
}