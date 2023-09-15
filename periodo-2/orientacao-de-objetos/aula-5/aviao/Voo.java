public class Voo{
    private String time;
    private String destino;
    private int id;
    private Passageiro passageiros[];
    private int qtdPassageiros;

    public Voo(){
        this.passageiros = new Passageiro[60];
        this.qtdPassageiros = 0;
    }

    public String getTime(){
        return this.time;
    }

    public void setTime(String newTime){
        this.time = newTime;
    }

    public String getDestino(){
        return this.destino;
    }

    public void setDestino(String newDestino){
        this.destino = newDestino;
    }

    public Passageiro getPassageiro(int pos){
        return this.passageiros[pos];
    }

    public int getId(){
        return this.id;
    }

    public void setId(int newId){
        this.id = newId;
    }
    
    public void setPassageiro(Passageiro passageiro){
        if (this.qtdPassageiros < 60){
            this.passageiros[qtdPassageiros] = passageiro;
            this.qtdPassageiros++;
        } else {
            System.out.println("Quantidade de passageiros excedida");
        }
    }

    public int getQtdPassageiros(){
        return this.qtdPassageiros;
    }
} 