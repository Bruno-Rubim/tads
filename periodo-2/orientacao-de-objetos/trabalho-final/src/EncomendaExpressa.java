public class EncomendaExpressa extends Encomenda{
    private int prazo;
    private String fone;

    public EncomendaExpressa(int numPedido, String dtPostagem, int prazo, float peso, String fone){
        this.setNumPedido(numPedido);
        this.setDtPostagem(dtPostagem);
        this.setPrazo(prazo);
        this.setPeso(peso);
        this.setFone(fone);
    }

    public float calcularFrete(float preco){
        if (this.prazo >= 3) {
            return this.getPeso() * preco;
        } else {
            return (this.getPeso() * preco) * 1.25f;
        }
    }

    public int getPrazo(){
        return this.prazo;
    }
    public void setPrazo(int prazo){
        this.prazo = prazo;
    }

    public String getFone(){
        return this.fone;
    }
    public void setFone(String fone){
        this.fone = fone;
    }
}