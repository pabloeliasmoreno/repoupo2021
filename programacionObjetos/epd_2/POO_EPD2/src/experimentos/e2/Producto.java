package experimentos.e2;

public class Producto {

    public String nombre;

    public float precio;

    public int unidades;

    public float valorEnStock() {

        return unidades * precio;

    }

    public void incrementarStock(int incremento) {

        unidades = unidades + incremento;

    }

    public void disminuirStock(int decremento) {

        unidades = unidades - decremento;

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

        if (this.precio > 0) {

            this.precio = precio;

        } else {

            this.precio = -precio;

        }

    }

}
