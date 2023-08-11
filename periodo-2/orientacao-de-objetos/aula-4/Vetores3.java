import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Vetores3{
    public static void main(String args[]) throws Exception{
        BufferedReader reader = new BufferedReader(
            new InputStreamReader(System.in));

        Meses listaMeses = new Meses();

        int response;
        System.out.println("Insira o numero do mês:");
        response = Integer.parseInt(reader.readLine());
        System.out.println(listaMeses.selecionarMes(response));
    }
}