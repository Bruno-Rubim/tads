public class Quadrado implements FormaGeometrica{
    private float lado;

    public Quadrado(float lado){
        setLado(lado);
    }

    public float getLado(){
        return this.lado;
    }

    public void setLado(float l){
        this.lado = l;
    }

    public float calcularArea(){
        return this.getLado()*this.getLado();
    }
}