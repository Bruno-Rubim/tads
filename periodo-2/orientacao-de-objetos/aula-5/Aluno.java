public class Aluno{
    private String nome;
    private String matricula;
    private float nota1;
    private float nota2;
    private float nota3;

    // get
    public String getNome(){
        return this.nome;
    }

    public String getMatricula(){
        return this.matricula;
    }

    public float getNota1(){
        return this.nota1;
    }

    public float getNota2(){
        return this.nota2;
    }

    public float getNota3(){
        return this.nota3;
    }

    // set
    public void setNome(String n){
        this.nome = n;
    }

    public void setMatricula(String n){
        this.nome = matricula;
    }

    public void setNota1(float n){
        this.nota1 = n;
    }

    public void setNota2(float n){
        this.nota2 = n;
    }

    public void setNota3(float n){
        this.nota3 = n;
    }

}