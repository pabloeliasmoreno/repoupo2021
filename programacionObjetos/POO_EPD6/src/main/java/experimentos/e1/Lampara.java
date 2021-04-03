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
public class Lampara implements Interruptor, Potenciometro {

    private boolean encendida;
    private int potencia;
    private String marca;

    public Lampara(String m) {
        marca = m;
    }

    @Override
    public void encender() {
        encendida = true;
        potencia = MAXPOT;
    }

    @Override
    public void apagar() {
        encendida = false;
        potencia = 0;
    }

    @Override
    public void imprimir() {
        System.out.println("Lampara " + marca + ": Enc=" + encendida + " Pot=" + potencia);
    }

    @Override
    public void aumentarPotencia() {
        potencia++;
    }

    ;
    @Override
    public void disminuirPotencia() {
        potencia--;
    }
}
