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
public class Rectangulo extends Figura {

    private double base, altura;

    public Rectangulo(String color, double base, double altura) {
        super(color);
        this.base = base;
        this.altura = altura;
    }

    public void imprimir() {
        super.imprimir();
        System.out.println("Rectangulo de base " + base + " y altura " + altura);
    }

    // Para HERENCIA FORZADA
    public double Area() {
        return base * altura;
    }
}
