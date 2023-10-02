import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStreamReader;

public class SistemaTransp{
    private BufferedReader keyboardReader;
    private BufferedReader readerConfigFile;

    public static void main(String args[]) throws Exception{
        SistemaTransp st = new SistemaTransp();
        st.keyboardReader = new BufferedReader(new InputStreamReader(System.in));
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
            System.out.println("0. Sair");
            System.out.println("1. Importar arquivo de encomendas");
            System.out.println("2. Exibir a lista de encomendas Normais");
            System.out.println("3. Exibir a lista de encomendas Expressas");
            choice = Integer.parseInt(keyboardReader.readLine());
            System.out.println("");
            
            switch(choice){
                case 1:
                    dataFile = ("../csv/" + st.solicitarArquivo(st.keyboardReader, "dados"));
                    trsp.importarDados(dataFile);
                    break;
                case 2:
                    trsp.imprimirEncomendasNormais();
                    break;
                case 3:
                    trsp.imprimirEncomendasEspressas();
                    break;
                default:
                    break;
            }
        }
    }
}