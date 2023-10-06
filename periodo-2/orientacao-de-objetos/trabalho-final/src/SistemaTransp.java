import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStreamReader;

public class SistemaTransp{
    private BufferedReader keyboardReader;
    private BufferedReader readerConfigFile;

    public static void main(String args[]) throws Exception{
        SistemaTransp st = new SistemaTransp();
        st.keyboardReader = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Bem vindo ao sistema de importacoes.");
        String configFile = ("../csv/" + st.solicitarArquivo(st.keyboardReader, "configuracao"));
        st.readerConfigFile = new BufferedReader(new FileReader(configFile));

        Transportadora trsp = new Transportadora(configFile);

        st.menu(st, trsp);
        st.readerConfigFile.close();
    }

    public String solicitarArquivo(BufferedReader reader, String fileType) throws Exception{
        System.out.println("Insira o nome do arquivo de " + fileType + ".");
        String resp = reader.readLine(); 
        System.out.println("");
        System.out.println("Arquivo de " + fileType + " definido como " + resp);
        return resp;
    }

    public void menu(SistemaTransp st, Transportadora trsp) throws Exception{
        int choice = 9654;
        String dataFile;
        String resp;

        while(choice != 0){
            System.out.println("");
            System.out.println("--Menu--");
            System.out.println("");
            System.out.println("0. Sair");
            System.out.println("1. Importar arquivo de encomendas");
            System.out.println("2. Exibir a lista de encomendas Normais");
            System.out.println("3. Exibir a lista de encomendas Expressas");
            choice = Integer.parseInt(keyboardReader.readLine());
            System.out.println("");
            
            switch(choice){
                case 0:
                    System.out.println("Saindo...");
                    break;
                case 1:
                    dataFile = ("../csv/" + st.solicitarArquivo(st.keyboardReader, "dados"));
                    trsp.importarDados(dataFile);
                    System.out.println("");
                    System.out.println("Total de encomendas: " + trsp.getNumTotal());
                    System.out.println("Peso total de encomendas: " +  String.format("%.02f", trsp.getPesoTotal()));
                    break;
                case 2:
                    trsp.imprimirEncomendasNormais();
                    break;
                case 3:
                    trsp.imprimirEncomendasEspressas();
                    break;
                default:
                    System.out.println("Comando nao encontrado.");
                    break;
            }
        }
    }
}