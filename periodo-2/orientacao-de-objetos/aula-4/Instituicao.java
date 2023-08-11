public class Instituicao{
    public static void main(String args[]){
        String s1 = "IFPR - Campus Foz do Iguaçu - Avenida Araucária, 780, Bairro Vila A - CEP: 85860-000 - Foz do Iguaçu - Paraná - (45)3422-5348";
        int posDoisPontos = s1.indexOf(":");
        System.out.println("CEP: " + s1.substring(posDoisPontos + 2, posDoisPontos + 11));
        int digitos = Integer.parseInt(s1.substring(s1.length() - 4, s1.length()));
        System.out.println("Ultimos digitos do telefone dividido por 2: " + digitos/2);
    }
}