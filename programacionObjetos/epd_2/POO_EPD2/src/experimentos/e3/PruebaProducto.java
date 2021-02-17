package experimentos.e3;

public class PruebaProducto {

    public static void main(String[] args) {

        Producto p = new Producto();
        float precioTotal;
        p.setNombre("Cola-cao");
        //p.precio = 10.5F;
        //p.precio = -10.5F;
        p.setPrecio(-10.5F);
        //p.unidades = 3;
        p.setUnidades(3);
        precioTotal = p.getPrecio() * p.getUnidades();
        System.out.println("El precio del producto " + p.getNombre() + " es de "
                + p.getPrecio() + " Euros");
        System.out.println("Hay " + p.getUnidades() + " en stock, valoradas es "
                + precioTotal + " Euros");

    }

}
