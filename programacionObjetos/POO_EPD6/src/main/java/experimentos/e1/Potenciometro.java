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
public interface Potenciometro {
    static final int MAXPOT = 10;
    void encender();
    void apagar();
    void imprimir();
    void aumentarPotencia();
    void disminuirPotencia();
}
