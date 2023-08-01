public class Exemplo3{
    public static void main(String args[]){
        String cliente = "Fernando";
 
        Pet petDoFernandinho = new Pet();
        petDoFernandinho.nome = "Cabron";
        petDoFernandinho.idade = 34;

        System.out.println("O cliente " + cliente + " possui um pet chamado " + petDoFernandinho.nome + " que tem " + petDoFernandinho.idade + " minutos de vida.");
    }
}