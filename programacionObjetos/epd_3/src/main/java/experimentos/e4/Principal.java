package experimentos.e4;

/**
 *
 * @author Manuel
 */
public class Principal {

    public static void main(String[] args) {

        Producto p = new Producto("Caja de galletas saladas", 2.35F, 200);
        Producto q = new Producto("Paquete Azúcar 1Kg", 1.50F, 300);

        System.out.println(p.getNombre() + ": " + p.getPrecio()
                + " € más " + p.calculaIva(16) + " € de IVA (16%)");

        Producto.iva = 10;
        System.out.println(p.getNombre() + ": " + p.precioConIva() + " € (IVA incluido)");
        System.out.println(p.getNombre() + ": " + q.precioConIva() + " € (IVA incluido)");
    }
}
