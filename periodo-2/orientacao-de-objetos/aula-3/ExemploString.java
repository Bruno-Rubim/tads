public class ExemploString {
    public static void main(String args[]){
        String str1;
        String str2;
        str1 = "Rata Rata Ratakatan        ";
        System.out.println(str1 + "!");
        
        str1 = str1.trim();
        System.out.println(str1 + "!");
        
        System.out.println("Tamanho = " + str1.length());
        
        str2 = str1.replace("ta", "to");
        System.out.println(str2);
        
        str2 = str1.substring(6, 10);
        System.out.println(str2);

        str1 = "eae.galerinha@dessa.dimensao.com.pqp";
        int pos = str1.indexOf("@");
        System.out.println("@ esta na posição " + pos);
        System.out.println("Usuario: " + str1.substring(0, pos));
        System.out.println("Servidor: "
        + str1.substring(pos+1, str1.length()));

        int num = 9;
        String str3 = String.valueOf(num);
        System.out.println(str3);
    }
}