public class Escola {
    private String nome;
    private String telefone;
    private int quantTurmas;
    private Turma[] vetTurmas;

    public Escola(){
        this.vetTurmas = new Turma[20];
        this.quantTurmas = 0;
    }

    public String getNome(){
        return this.nome;
   }
    public String setNome(String n){
        return this.nome = n;
    }

    public String getTelefone(){
        return this.telefone;
    }
    public String setTelefone(String n){
        return this.telefone = n;
    }

    public Turma getTurma(int pos){
        return this.vetTurmas[pos];
    }
    public void setTurma(Turma turma){
        if (this.quantTurmas < 20){
            this.vetTurmas[quantTurmas] = turma;
            this.quantTurmas++;
        } else {
            
        }
    }

    public int getQntTurmas(){
        return this.quantTurmas;
    }
}