/*
Exercício:

-Crie uma classe para representar uma conta corrente,
que armazene o numero da conta,
o nome do cliente
e o saldo.

Devem existir métodos para depositar uma quantia,
sacar uma quantia
e obter o saldo da conta.

Para cada saque deve ser debitada uma taxa de operação equivalente a 0,5% do valor sacado. 

-Em seguida crie uma subclasse de conta corrente para representar uma conta corrente especial.
Por padrão, clientes com conta especial pagam taxa de saque de apenas 0,3% do valor sacado.
Além disso, também deve ser possível cobrar uma taxa personalizada de acordo com o relacionamento do cliente com o banco.

-Faça testes com as duas classes e verifique seus resultados.

--Feito--

*/

public class Main{
    public static void main(String args[]){
        ContaCorrente cc = new ContaCorrente();
        ContaEspecial ce = new ContaEspecial();

        cc.setNumConta(1837831);
        cc.setNomeCliente("Joberson");
        ce.setNumConta(1864792);
        ce.setNomeCliente("Gremista");

        System.out.println("Imprimindo o registro da Conta Corrente: " + cc.getNumConta() + " de " + cc.getNomeCliente());
        System.out.println("Deposito de R$:300,00");
        cc.depositar(300f);
        System.out.println("Saldo atual R$: " + cc.getSaldo());
        System.out.println("Pedido de saque de R$:20,50");
        if (cc.sacar(20.5f)){
            System.out.println("Concebido, taxa de 0,5%");
            System.out.println("Saldo atual R$: " + cc.getSaldo());
        } else {
            System.out.println("Saldo insuficiente");
        }
        System.out.println("Deposito de R$:20,00");
        cc.depositar(20f);
        System.out.println("Saldo atual R$: " + cc.getSaldo());
        System.out.println("Pedido de saque de R$:300,00");
        if (cc.sacar(300f)){
            System.out.println("Concebido, taxa de 0,5%");
            System.out.println("Saldo atual R$: " + cc.getSaldo());
        } else {
            System.out.println("Saldo insuficiente");
        }
        System.out.println("Fim do registro");
        System.out.println("");
        
        System.out.println("Imprimindo o registro da Conta Especial: " + ce.getNumConta() + " de " + ce.getNomeCliente());
        System.out.println("Deposito de R$:500,00");
        ce.depositar(500f);
        System.out.println("Saldo atual R$: " + ce.getSaldo());
        System.out.println("Pedido de saque de R$:150,00");
        if (ce.sacar(150f)){
            System.out.println("Concebido, taxa de 0,3%");
            System.out.println("Saldo atual R$: " + ce.getSaldo());
        } else {
            System.out.println("Saldo insuficiente");
        }
        System.out.println("Pedido de saque de R$:200,00 com taxa especial");
        if (ce.sacar(200f, 0.1f)){
            System.out.println("Concebido, taxa de 0,1%");
            System.out.println("Saldo atual R$: " + ce.getSaldo());
        } else {
            System.out.println("Saldo insuficiente");
        }
        System.out.println("Fim do registro");
        System.out.println("");
    }
}