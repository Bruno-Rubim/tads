/*
Exercício interfaces 1:

-Crie 3 classes (Quadrado, Retangulo e Circulo) que implementem a interface FormaGeometrica:

public interface FormaGeometrica{

	public float calcularArea();

}

-Em cada classe crie os atributos e métodos get/set necessários para o cálculo da área.

-Crie um programa para testar as suas classes.
*/

public class Main{
	public static void main(String args[]){
		Quadrado q = new Quadrado(1.2f);
		System.out.println(q.calcularArea());
		Retangulo r = new Retangulo(3.4f, 8.9f);
		System.out.println(r.calcularArea());
		Circulo c = new Circulo(0.63f);
		System.out.println(c.calcularArea());
	}
}