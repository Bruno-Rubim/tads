public class Encomenda{
    private int numPedido;
    private String dtPostagem;
    private float peso;
    
    public int getNumPedido(){
        return this.numPedido;
    }
    public void setNumPedido(int numPedido){
        this.numPedido = numPedido;
    }

    public String getDtPostagem(){
        return this.dtPostagem;
    }
    public void setDtPostagem(String dtPostagem){
        this.dtPostagem = dtPostagem;
    }

    public float getPeso(){
        return this.peso;
    }
    public void setPeso(float peso){
        this.peso = peso;
    }
}