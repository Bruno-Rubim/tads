public class Livro extends ItemGeral{
    private int quantidadePags;
    private String editora;
    private String genero;

    public int getquantidadePags(){
        return this.quantidadePags;
    }

    public String geteditora(){
        return this.editora;
    }

    public String getgenero(){
        return this.genero;
    }
}
