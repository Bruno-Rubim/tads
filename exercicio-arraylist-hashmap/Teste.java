import java.util.HashMap;

public class Teste {
    public HashMap<String, String> map = new HashMap<String, String>();

    public static void main(String[] args) {
        Teste teste = new Teste();
        System.out.println(teste.map.keySet());
    }
}
