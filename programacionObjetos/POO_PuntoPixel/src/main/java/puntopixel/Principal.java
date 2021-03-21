package puntopixel;
/*
    @author manueljesus00
INFO: Documento creado a partir de la clase asincrona de POO
*/
public class Principal {

    public static void main(String[] args) {
        Punto pt1 = new Punto();
        Punto pt2 = new Punto(2, 3);

        System.out.println("Punto: x=" + pt1.getX() + " - y=" + pt1.getY());

        pt1.setX(5);

        System.out.println("Punto: x=" + pt1.getX() + " - y=" + pt1.getY());
        System.out.println("Punto: x=" + pt2.getX() + " - y=" + pt2.getY());

        System.out.println("Punto pt1:" + pt1);

        if (pt1.equals(pt2)) {
            System.out.println(pt1 + " ES IGUAL A " + pt2);
        } else {
            System.out.println(pt1 + " ES DISTINTO A " + pt2);
        }

        pt1.mover(pt2);

        if (pt1.equals(pt2)) {
            System.out.println(pt1 + " ES IGUAL A " + pt2);
        } else {
            System.out.println(pt1 + " ES DISTINTO A " + pt2);
        }

        System.out.println("****** PRUEBA DE LA CLASE PIXEL ***********");

        Pixel px1 = new Pixel();
        Pixel px2 = new Pixel(pt1, "Rojo");

        System.out.println("Pixel px1: " + px1);
        System.out.println("Pixel px2: " + px2);

        px1.setColor("Verde");
        px1.setX(25);
        System.out.println("Pixel px1: " + px1);

        double distancia1 = pt1.distancia(pt2);
        double distancia2 = px1.distancia(px2);
        
        System.out.println("Distancia 1: "+distancia1);
        System.out.println("Distancia 2: "+distancia2);
    }
}
