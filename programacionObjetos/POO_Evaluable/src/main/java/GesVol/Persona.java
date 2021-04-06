package GesVol;
import poo.io.*;
// MAIN CLASS
public class Persona {
    public String nombre, apellido;
    public int identificacion;
    public int dia, mes, anyo;

    public Persona(String nombre, String apellido, int identificacion, int dia, int mes, int anyo){
        this.nombre = nombre;
        this.apellido = apellido;
        this.identificacion = identificacion;
        this.dia = dia;
        this.mes = mes;
        this.anyo = anyo;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public int getIdentificacion() {
        return identificacion;
    }

    public void setIdentificacion(int identificacion) {
        this.identificacion = identificacion;
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        this.dia = dia;
    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public int getAnyo() {
        return anyo;
    }

    public void setAnyo(int anyo) {
        this.anyo = anyo;
    }
}
