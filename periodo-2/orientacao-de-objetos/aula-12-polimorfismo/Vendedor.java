public class Vendedor{
    public float calcularComissao(float venda){
        return (venda * 0.05f) + 20;
    }

    public float calcularComissao(float venda, float perc){
        return venda * perc;
    }
}