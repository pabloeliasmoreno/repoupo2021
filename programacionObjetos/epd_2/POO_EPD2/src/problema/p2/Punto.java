package problema.p2;
public class Punto {
    private double x;
    private double y;
    
    public Punto(){
        x = 0;
        y = 0;
    }
    
    public void setX(double x){
        this.x = x;
    }
    
    public void setY(double y){
        this.y = y;
    }
    
    public double getX(){
        return x;
    }
    
    public double getY(){
        return y;
    }
    
    public void borrar(){
        x = 0;
        y = 0;
    }
    
    public void mover(double x, double y){
        this.x = x;
        this.y = y;
    }
    
    public void mover(Punto p){
        this.x = p.getX();
        this.y = p.getY();
    }
    
    public double distancia(Punto p){
        double distancia = Math.sqrt(Math.pow(this.x-p.getX(), 2)+Math.pow(this.y-p.getY(), 2));
        return distancia;
    }
    
    public void imprimir(){
        System.out.println("(" + this.x + " , " + this.y + ")");
    }
}
