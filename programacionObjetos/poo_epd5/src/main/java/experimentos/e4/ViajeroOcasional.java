/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package experimentos.e4;

/**
 *
 * @author Manuel
 */
public class ViajeroOcasional extends UsuarioMetro{

    public ViajeroOcasional(int codigoViajero, String paradaInicial, String paradaFinal) {
        super(codigoViajero, paradaInicial, paradaFinal);
    }

    public void viajar() {
        System.out.println("Viajero "+getCodigoViajero() + ": "+getParadaInicial()+" - "+getParadaFinal()+". Ha validado su billete univiaje");
    }

}
