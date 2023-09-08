public class ExemploHeranca{
    public static void main (String args[]){
        Pessoa p1 = new Pessoa();
        p1.setNome("Predo");
        p1.setEmail("predodasilva@predo.com");
        p1.setIdade(19);
        System.out.println("Nome p1: " + p1.getNome());

        Pessoa p2 = new Pessoa(
            "Janina", "jnn@gml.cm", 4
        );

        System.out.println("Nome p2: " + p2.getNome());

        Aluno a1 = new Aluno();
        a1.setNome("barum");
        a1.setEmail("email@email.com");
        a1.setIdade(94);
        a1.setNota1(43f);
        a1.setNota2(94f);
        a1.setNota3(2f);
        a1.setNota4(67f);
        System.out.println("Aluno: " + a1.getNome());
        System.out.println("Media: " + String.format("%.2f", a1.calcularMedia()));
    }
}