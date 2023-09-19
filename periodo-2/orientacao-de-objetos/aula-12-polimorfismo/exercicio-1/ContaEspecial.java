public class ContaEspecial extends ContaCorrente{
    public boolean sacar(float valor){
        if((this.getSaldo() - (valor + (valor * 0.003f))) >= 0){
            this.setSaldo(this.getSaldo() - (valor + (valor * 0.003f)));
            return true;
        } else {
            return false;
        }
    }

    public boolean sacar(float valor, float perc){
        if ((this.getSaldo() - (valor + (valor * (perc / 100)))) >= 0){
            this.setSaldo(this.getSaldo() - (valor + (valor * (perc / 100))));
            return true;
        } else {
            return false;
        }
    }
}