package experimentos.e2;

import experimentos.e1.Producto;

public class Principal {
    
    public static void main(String [] args){
        
        Producto p = new Producto("Caja de galletas saladas", 2.35F, 200);
        
        p.incrementarStock(50);
        
        System.out.println("Actualmente el stock del producto -" + p.getNombre()
            + "- es de " + p.getUnidades() + " unidades");

        p.disminuirStock(100);

        System.out.println("Actualmente el stock del producto -" + p.getNombre()
            + "- es de " + p.getUnidades() + " unidades");

        System.out.println("El valor del stock del producto -" + p.getNombre()
            + "- es de " + p.valorEnStock() + " euros");
    }
}