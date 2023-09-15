public class RadioRelogio implements Radio, Relogio {
    public String getHoras(){
        return "Hora da escuridao eterna da noite sombria muito escuro aaa";
    }

    public void ligar(){
        System.out.println(" ([ ]0°)/ ");
    }

    public void desligar(){
        System.out.println(" ([ ]0°)\\ ");
    }
    
    public void trocarEstacao(int estacao){
        System.out.println(" ([ ]" + estacao + "°)/ ");
    }
}
