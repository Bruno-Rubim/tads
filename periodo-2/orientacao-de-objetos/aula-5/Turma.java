public class Turma{
    private int numTurma;
    private String nomeCurso;
    private int ano;
    private int quantAlunos;
    private Aluno[] vetAlunos;

    public Turma(){
        this.vetAlunos = new Aluno[40];
        this.quantAlunos = 0;
    }

    public int getNumTurma(){
        return this.numTurma;
    }
    public void setNumTurma(int n){
        this.numTurma = n;
    }

    public String getNomeCurso(){
        return this.nomeCurso;
    }
    public void setNomeCurso(String n){
        this.nomeCurso = n;
    }

    public int getAno(){
        return this.ano;
    }
    public void setAno(int n){
        this.ano = n;
    }

    public Aluno getAluno(int pos){
        return this.vetAlunos[pos];
    }
    public void setAluno(Aluno aluno){
        if (this.quantAlunos < 40){
            this.vetAlunos[quantAlunos] = aluno;
            this.quantAlunos++;
        } else {
            
        }
    }
}