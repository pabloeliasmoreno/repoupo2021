/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package experimentos.e4;

/**
 *
 * @author Manuel
 */
public class Producto {

    private String nombre;

    private float precio;

    private int unidades;

    public static int iva;

    public Producto(String nombre, float precio, int unidades) {
        this.nombre = nombre;
        this.precio = precio;
        this.unidades = unidades;

    }

    public float valorEnStock() {
        return unidades * precio;
    }

    public void incrementarStock(int incremento) {
        unidades = unidades + incremento;
    }

    public void disminuirStock(int decremento) {
        unidades = unidades - decremento;
    }

    public void incrementarStock() {
        unidades = unidades + 1;
    }

    public void disminuirStock() {
        unidades = unidades - 1;
    }

    public String getNombre() {
        return nombre;
    }

    public float getPrecio() {
        return precio;
    }

    public int getUnidades() {
        return unidades;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setUnidades(int unidades) {
        this.unidades = unidades;
    }

    public void setPrecio(float precio) {
        if (precio > 0) {
            this.precio = precio;
        } else {
            this.precio = -precio;
        }
    }

    public float precioConIva() {
        return precio + calculaIva(iva);
    }

    public float calculaIva(int iva) {
        return iva * precio / 100;
    }
}
