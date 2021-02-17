package experimentos.e1;

/**
 *
 * Clase sencilla para probar la clase Numero
 *
 *
 *
 * @author Raúl Giráldez
 *
 * @version 1.0
 *
 * @see Numero
 *
 */
public class main {

    /**
     *
     * @param args the command line arguments
     *
     */
    public static void main(String[] args) {

        // TODO code application logic here
        Numero n, m, resultado;

        n = new Numero(0.0);

        for (int i = 0; i <= 100; i++) {

            m = new Numero((double) i);

            resultado = n.suma(m);

            System.out.println(resultado.getN());

        }

    }

}
