/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package experimentos.e1;

/**
 *
 * @author Manuel
 */
public class Bebe extends Persona implements IBebe {

    private double edad;

    public void setEdad(double edad) {
        this.edad = edad;
        super.setEdad((int)edad);
    }
    
    public void presentate(){
        super.presentate();
        System.out.println(" y "+((this.edad - getEdad())*12)+" meses");
    }
}
