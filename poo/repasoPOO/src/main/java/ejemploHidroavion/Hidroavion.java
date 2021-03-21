/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejemploHidroavion;

/**
 *
 * @author Manuel
 */
public interface Hidroavion extends Avion, Barco{
    void arranca();
    void navega();
    void vuela();
}
