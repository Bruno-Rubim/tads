public class Ulitlizador{
    public static void main(String args[]){
        System.out.println("Relogio de pulso");
        RelogioDePulso rp = new RelogioDePulso();
        System.out.println(rp.getHoras());
        System.out.println(rp.iniciarCronometro());

        Relogio r = new Relogio(){
            public String getHoras(){
                return "Uma outra hora aparentemente";
            }
        };
        System.out.println(r.getHoras());

        RadioRelogio rr = new RadioRelogio();
        rr.ligar();
        rr.desligar();
        rr.trocarEstacao(3);
        System.out.println(rr.getHoras());
    }
}