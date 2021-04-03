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
public class Prueba {

    public static void main(String[] args) {
        Interruptor i = new Lampara("Philips");
        Potenciometro pi = (Potenciometro) i;
        Potenciometro p = new Lampara("Siemens");
        i.encender();
        pi.disminuirPotencia();
        i.imprimir(); // Philips; True; 10
        p.imprimir(); // Siemens; False; 9
    }
}
