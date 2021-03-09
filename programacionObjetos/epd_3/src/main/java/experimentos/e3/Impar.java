package experimentos.e3;

/*
public class Impar {

    public int n;
    // Si el resultado de esImpar es TRUE n se mantiene tal cual,
    // sino se suma una unidad
    public Impar(int n) {
        if (esImpar(n)) {
            this.n = n;
        } else {
            this.n = n + 1;
        }
    }
    // esImpar comprueba si al dividir n entre 2 existe un resto que sea 1 o no.
    public boolean esImpar(int n) {
        return n % 2 == 1;
    }
}
*/
public class Impar {
    private int n;

    public Impar(int n) {
        setN(n);
    }

    public int getN() {
        return n;
    }

    public void setN(int n) {
        if (esImpar(n)) {
            this.n = n;
        } else {
            this.n = n + 1;
        }
    }

    private boolean esImpar(int n) {
        return n % 2 == 1;
    }
}
