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
public class Principal {

    public static void main(String[] args) {
        //Figura f = new Figura("Rojo");
        Circulo c = new Circulo("Verde", 90.0);
        Circulo c2 = new Circulo("Rojo", 95.0);
        Rectangulo r = new Rectangulo("Amarillo", 3, 10);

        //f.imprimir();
        c.imprimir();
        c2.imprimir();
        
        r.imprimir();
        //System.out.println("Area de r es " + r.area());
        
        // Method EQUALS
        if(c.equals(c2)){
            System.out.println("SON IGUALES");
        }
        else{
            System.out.println("NO SON IGUALES");
        }
        
        // Method TOSTRING
        System.out.println(c2.toString());
    }
}
