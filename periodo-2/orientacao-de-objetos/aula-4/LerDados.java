import java.io.BufferedReader;
import java.io.InputStreamReader;

public class LerDados {
    public static void main(String args[]) throws Exception{
        BufferedReader reader = new BufferedReader(
            new InputStreamReader(System.in));

        String linha = "";
        System.out.println("Digite algo ou S para sair");
        while (!linha.equals("S")){
            linha = reader.readLine();
            System.out.println("Digitou: " + linha);
        }
    }
}