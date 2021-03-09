package experimentos.e1;

public class Principal {
    public static void main (String[] args){
         Producto p = new Producto();

    p.setNombre("Caja de galletas saladas");
    p.setPrecio(2.35F);
    p.setUnidades(200);

    System.out.println("Actualmente el stock del producto -" + p.getNombre()
        + "- es de " + p.getUnidades() + " unidades");
    p.incrementarStockv2();

//    p.incrementarStock();
    System.out.println("El valor del stock del producto -" + p.getNombre()
        + "- es de " + p.valorEnStock() + " euros");
    
    p.incrementarStockv2();

    System.out.println("El valor del stock del producto -" + p.getNombre()
        + "- es de " + p.valorEnStock() + " euros");
    p.disminuirStockv2();

//    p.disminuirStock();

    System.out.println("El valor del stock del producto -" + p.getNombre()
        + "- es de " + p.valorEnStock() + " euros");
    p.disminuirStockv2();

//    p.disminuirStock(8);
    System.out.println("Actualmente el stock del producto -" + p.getNombre()
        + "- es de " + p.getUnidades() + " unidades");


    }
}
