package experimentos.e2;

public class PruebaProducto {

    public static void main(String[] args) {

        Producto p = new Producto();

        float precioTotal;

        p.nombre = "Cola-Cao";

        p.precio = 10.5F;

        p.unidades = 3;

        precioTotal = p.precio * p.unidades;

        System.out.println("El precio del producto " + p.nombre + " es de "
                + p.precio + " Euros");

        System.out.println("Hay " + p.unidades + " en stock, valoradas es "
                + precioTotal + " Euros");

    }

}
