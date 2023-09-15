public class Retangulo implements FormaGeometrica{
    private float base;
    private float altura;

    public Retangulo(float base, float altura){
        this.setBase(base);
        this.setAltura(altura);
    }

    public float getBase(){
        return this.base;
    }

    public void setBase(float b){
        this.base = b;
    }

    public float getAltura(){
        return this.altura;
    }

    public void setAltura(float b){
        this.altura = b;
    }

    public float calcularArea(){
        return this.getBase()*this.getAltura();
    }
}