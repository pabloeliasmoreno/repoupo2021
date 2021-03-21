package puntopixel;
/*
    @author manueljesus00
INFO: Documento creado a partir de la clase asincrona de POO
*/
public interface IPunto {

    public void borrar();

    public void mover(double x, double y);

    public void mover(IPunto s);

    public double distancia(IPunto s);

    public double getX();

    public double getY();

    public void setX(double v);

    public void setY(double v);
}
