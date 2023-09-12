public class Circulo implements FormaGeometrica{
    private float raio;

    public Circulo(float raio){
        setRaio(raio);
    }

    public float getRaio(){
        return this.raio;
    }

    public void setRaio(float l){
        this.raio = l;
    }

    public float calcularArea(){
        return this.getRaio()*this.getRaio()*3.14f;
    }
}