package metodos;

/**
 *
 * @author Manuel Jesus Flores Montano
 */
public class Equipos {
    private String nombre;
    private int puntos;
    
    public Equipos(String nombre, int puntos){
        this.nombre = nombre;
        setPuntos(puntos);
    }
    
    public String getNombre(){return nombre;}
    
    public int getPuntos(){return puntos;}
    
    public void setPuntos (int p){
        if (p>=0)
            puntos = p;
    }
}
