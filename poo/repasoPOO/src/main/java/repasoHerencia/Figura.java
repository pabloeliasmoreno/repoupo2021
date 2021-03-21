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
// IMPORTANTE PONER EL ABSTRACT PARA HERENCIA FORZADA
public abstract class Figura {

    protected String color;

    public Figura(String color) {
        this.color = color;
    }

    public void imprimir() {
        System.out.println("Color: " + color);
    }

    // HERENCIA FORZADA
    /*
        Es una clase cuya definicion es incompleta debido a que uno o varios
        de sus metodos no tienen codigo. Lo usamos cuando queremos forzar a las
        clases hija a implementar un mismo metodo
     */
    public abstract double Area();
}
