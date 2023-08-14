import java.io.BufferedReader;
import java.io.InputStreamReader;

public class SistemaEscolar {
    private Escola e1;
    BufferedReader reader;

    public static void main(String[] args) throws Exception{
        SistemaEscolar se = new SistemaEscolar();
        se.e1 = new Escola();
        se.reader = new BufferedReader(
            new InputStreamReader(System.in));
        
        System.out.println("Insira o nome da escola: ");
        se.e1.setNome(se.reader.readLine());
        System.out.println("Insira o telefone da escola: ");
        se.e1.setTelefone(se.reader.readLine());
        se.menu();
    }

    //menu
    private void menu() throws Exception{
        String resp = "";
        while(!resp.equals("0")){
            System.out.println("Opções:");
            System.out.println("0. Sair");
            System.out.println("1. Cadastrar turma");
            System.out.println("2. Listar turmas");
            System.out.println("3. Consultar turma");
            resp = this.reader.readLine();
            switch(resp){
                case "1":
                    this.cadastrarTurma();
                    break;
                case "2":
                    this.listarTurmas();
                    break;
                case "3":
                    this.consultarTurma();
                    break;
                default:
                    break;
            }
        }
    }

    //cadastrar turmas
    private void cadastrarTurma(){
        
    }

    //listar turmas
    private void listarTurmas(){
        
    }

    //consultar turma
    private void consultarTurma(){
        
    }
}
