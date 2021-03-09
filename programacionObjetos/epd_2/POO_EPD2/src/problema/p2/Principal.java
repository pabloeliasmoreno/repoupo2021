package problema.p2;
public class Principal {
    public static void main (String [] args){
        Punto p1 = new Punto();
        p1.imprimir();
        p1.setX(1);
        p1.setY(2);
        p1.imprimir();
        Punto p2 = new Punto();
        p2.imprimir();
        p2.setX(3);
        p2.setY(4);
        p2.imprimir();
        System.out.println(p1.distancia(p2));
        p1.mover(p2);
        p1.imprimir();
        p1.mover(4,4);
        p1.imprimir();
        p2.imprimir();
        p2.borrar();
        p2.imprimir();
        
    }
}
