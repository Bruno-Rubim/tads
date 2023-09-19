public class ContaCorrente{
    private int numConta;
    private String nomeCliente;
    private float saldo;

    public ContaCorrente(){
        this.saldo = 0f;
    }

    public int getNumConta() {
        return numConta;
    }
    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }
    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }
    
    public float getSaldo() {
        return saldo;
    }
    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }
    

    public void depositar(float valor){
        this.saldo += valor;
    }

    public boolean sacar(float valor){
        if ((this.saldo - (valor + (valor * 0.005))) >= 0){
            this.saldo -= valor + (valor * 0.005);
            return true;
        } else {
            return false;
        }
    }
}