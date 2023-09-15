public class Cliente extends Pessoa{
    private String listaDeItens[];
    private int quantItens;
    private String endereco;

    public String getEndereco() {
        return nota1;
    }
    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getItemDaLista(int pos){
        return listaDeItens[pos];
    }
    public void setItemDaLista(String item){
        this.listaDeItens.push(item);
        this.quantItens ++;
    }

    public int getQuantItens() {
        return this.quantItens;
    }
}