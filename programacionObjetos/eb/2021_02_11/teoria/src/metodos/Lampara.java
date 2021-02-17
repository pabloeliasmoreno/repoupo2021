package metodos;

/**
 *
 * @author Manuel Jesus Flores Montano
 */
public class Lampara {
    private boolean encendida;
    private int potencia;
    private String marca;
    
    public static final int MAXPOT = 10;
    
    public Lampara(String m) {
        marca = m;
    }

    public void encender() {
        encendida = true;
        potencia = 10;
    }

    public void apagar() {
        encendida = false;
        potencia = 0;
    }

    public void aumentarpotencia() {
        potencia++;
    }

    public void disminuirpotencia() {
        potencia--;
    }

    public void imprimir() {
        System.out.println("Lampara " + marca + ": Enc= " + encendida + " Pot= " + potencia);

    }
}
