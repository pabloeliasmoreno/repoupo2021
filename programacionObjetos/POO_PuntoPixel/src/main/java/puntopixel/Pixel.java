package puntopixel;
/*
    @author manueljesus00
INFO: Documento creado a partir de la clase asincrona de POO
*/
public class Pixel extends Punto implements IPixel {

    private String color;

    public Pixel() {
        super();
        color = "Negro";
    }

    /*public Pixel(Punto p, String c){
        x = p.x;
        y = p.y;
        color = c;
    }*/
    public Pixel(Punto p, String c) {
        super(p.x, p.y);
        color = c;
    }

    public void setColor(String c) {
        color = c;
    }

    public void borrar() {
        super.borrar();
        color = "Negro";
    }

    public String toString() {
        return super.toString() + " - Un pixel de color " + color;
    }

    public boolean equals(Object o) {
        Pixel px = (Pixel) o;
        return super.equals(px) && color.equals(px.color);
    }

}
