public class Companhia{
    private String name;
    private String local;
    private int qtdVoos;
    private Voo[] vetVoos;

    public Companhia(){
        this.vetVoos = new Voo[10];
        this.qtdVoos = 0;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String newName){
        this.name = newName;
    }

    public String getLocal(){
        return this.local;
    }

    public void setLocal(String newLocal){
        this.local = newLocal;
    }

    public Voo getVoo(int pos){
        return this.vetVoos[pos];
    }

    public void setVoo(Voo voo){
        if (this.qtdVoos < 10){
            this.vetVoos[qtdVoos] = voo;
            this.qtdVoos++;
        } else {
            System.out.println("Capacidade de voos excedida");
        }
    }

    public int getQtdVoos(){
        return this.qtdVoos;
    }
}