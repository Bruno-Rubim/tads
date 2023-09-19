public class Loja{
    Vendedor v1;
    public static void main(String args[]){
        Loja l1 = new Loja();

        l1.v1 = new Vendedor();

        float comissao1 = l1.v1.calcularComissao(500.f, 0.15f);
        System.out.println("Comissão 1: " + comissao1);

        float comissao2 = l1.v1.calcularComissao(200.4f);
        System.out.println("Comissão 2: " + comissao2);
    }
}