package GesVol;
import poo.io.*;
public class Voluntario extends Persona{

    public int actividadesRealizadas;
    public float horasRealizadas;
    public float horasReferencias;


    public Voluntario(String nombre, String apellido, int identificacion, int dia, int mes, int anyo) {
        super(nombre, apellido, identificacion, dia, mes, anyo);
    }

    public int getActividadesRealizadas(){
        return actividadesRealizadas;
    }

    public void setActividadesRealizadas(int actividades){
        actividadesRealizadas = actividades;
    }

    public void altaActividades(float realizadas, float referencias){
        actividadesRealizadas += 1;
        horasRealizadas = horasReferencias + realizadas;
        horasReferencias = horasRealizadas + referencias;
        System.out.println("NUEVA ACTIVIDAD DADA DE ALTA");
    }

    public float getHorasRealizadas(){
        return horasRealizadas;
    }
    public void setHorasRealizadas(int horasRealizadas) {
        this.horasRealizadas = horasRealizadas;
    }

    public float getHorasReferencias(){
        return horasReferencias;
    }

    public void setHorasReferencias(int horasReferencias){
        this.horasReferencias = horasReferencias;
    }
}
