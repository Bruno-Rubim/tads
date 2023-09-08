public class ItemGeral{
    private String id;
    private String titulo;
    private String autor;
    private int ano;
    private String idioma;
    private boolean emprestavel;
    private boolean disponivel;
    private String dataEmprestado;
    private String dataEntrega;

    public String getId(){
        return this.id;
    }
    public void setId(String id){
        this.id = id;
    }


    public String getTitulo(){
        return this.titulo;
    }
    public void setTitulo(String titulo){
        this.titulo = titulo;
    }


    public String getAutor(){
        return this.autor;
    }
    public void setAutor(String autor){
        this.autor = autor;
    }


    public int getAno(){
        return this.ano;
    }
    public void setAno(int ano){
        this.ano = ano;
    }


    public String getIdioma(){
        return this.idioma;
    }
    public void setIdioma(String idioma){
        this.idioma = idioma;
    }


    public boolean isEmprestavel(){
        return this.emprestavel;
    }
    public void setEmprestavel(boolean emprestavel){
        this.emprestavel = emprestavel;
    }


    public boolean getDisponivel(){
        return this.disponivel;
    }
    public void setDisponivel(boolean disponivel){
        this.disponivel = disponivel;
    }


    public String getDataEmprestado(){
        return this.dataEmprestado;
    }
    public void setDataEmprestado(String dataEmprestado){
        this.dataEmprestado = dataEmprestado;
    }

    public String getDataEntrega(){
        return this.dataEntrega;
    }
    public void setDataEntrega(String dataEntrega){
        this.dataEntrega = dataEntrega;
    }

}