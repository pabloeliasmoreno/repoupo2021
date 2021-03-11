/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package repasoHerencia;

/**
 *
 * @author Manuel
 */
// FINAL: Evitamos que se herede a otra clase
public final class Circulo extends Figura {

    private double radio;

    public Circulo(String color, double radio) {
        super(color);
        this.radio = radio;
    }

    public void imprimir() {
        System.out.println("Figura de color " + color);
        System.out.println("Circulo de radio " + radio);
    }

    // SOBRECARGA DE METODOS
    // Mismo metodo, mismo nombre pero distintos parametros
    public void imprimir(int i) {
        System.out.println("Figura " + i + " Color " + color);
    }

    // Para HERENCIA FORZADA
    public double Area() {
        return radio * radio * 3.14;
    }

    // METHOD EQUALS redefinido
    public boolean equals(Object o) {
        Circulo cir = (Circulo) o;

        boolean resultado = this.radio == cir.radio && this.color.equals(cir);

        return resultado;
    }

    // METHOD TOSTRING redefinido
    public String toString() {
        return "Circulo de color " + color + " y radio " + radio;
    }
}
