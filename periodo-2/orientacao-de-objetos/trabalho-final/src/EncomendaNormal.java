public class EncomendaNormal extends Encomenda{

    public EncomendaNormal(int numPedido, String dtPostagem, float peso){
        this.setNumPedido(numPedido);
        this.setDtPostagem(dtPostagem);
        this.setPeso(peso);
    }
    
    public float calcularFrete(float preco){
        return this.getPeso() * preco;
    }
}