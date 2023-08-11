import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Vetores2{
    public static void main(String args[]) throws Exception{
        BufferedReader reader = new BufferedReader(
            new InputStreamReader(System.in));
        String meses[] = {"jan", "fev", "mar", "abr", "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};

        int response;
        response = Integer.parseInt(reader.readLine());
        System.out.println("Insira o numero do mês:");
        System.out.println(meses[response - 1]);
    }
}