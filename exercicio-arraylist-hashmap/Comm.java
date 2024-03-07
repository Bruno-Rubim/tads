import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Comm {
    private BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));

    public String solicitarData() throws Exception{
        System.out.println("");
        System.out.println("Insira a data de aniversário: ");
        return userInput.readLine();
    }

    public String solicitarNome() throws Exception{
        System.out.println("");
        System.out.println("Insira o nome do aniversário: ");
        return userInput.readLine();
    }

    public String menu() throws Exception{
        System.out.println("");
        System.out.println("Insira uma opção:");
        System.out.println("0 Sair");
        System.out.println("1 Adicionar anivesariante");
        System.out.println("2 Listar datas de aniversários");
        System.out.println("3 Listar aniversariantes");
        System.out.println("");
        String input = userInput.readLine();
        System.out.println("");
        return input;
    }

    public void sair(){
        System.out.println("");
        System.out.println("Saindo...");
    }
    
    public void print(String data){
        System.out.println(data);
    }

    public void erroOpcao(){
        System.out.println("");
        System.out.println("Opção desconhecida");
    }

    public void erroNenhumaData(){
        System.out.println("");
        System.out.println("Não há datas de aniversários cadastradas");
    }    

    public void erroDataNaoExistente(){
        System.out.println("");
        System.out.println("Esta data não contem aniversariantes cadastrados");
    }    

    public void erroComum(){
        System.out.println("");
        System.out.println("Error");
    }    
}