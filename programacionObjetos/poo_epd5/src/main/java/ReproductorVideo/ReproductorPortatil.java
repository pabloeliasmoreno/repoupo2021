/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ReproductorVideo;

/**
 *
 * @author Manuel
 */
public class ReproductorPortatil implements IReproductorPortatil{

    public String marca;
    public String modelo;
    public String tipoAlmacenamiento;
    private boolean sonido;
    private boolean video;
    private int capacidad;
    private int duracion;
    private int peso;
    private int ancho;
    private int alto;
    private int grosor;
    
    // Constructor
    public ReproductorPortatil(String marca, String modelo, String tipoAlmacenamiento){
        this.marca = marca;
        this.modelo = modelo;
        this.tipoAlmacenamiento = tipoAlmacenamiento;
    }
    
    // IMPLEMENTACION DE METODOS DE IReproductorPortatil
    @Override
    public String getMarca() {
        return marca;
    }

    @Override
    public String getModelo() {
        return modelo;
    }

    @Override
    public boolean getReproduceSonido() {
        return sonido;
    }

    @Override
    public boolean getReproduceVideo() {
        return video;
    }

    @Override
    public String getTipoDeAlmacenamiento() {
        // Write code...
    }

    @Override
    public int getCapacidadDelAlmacenamiento() {
        return capacidad;
    }

    @Override
    public String getPantalla() {
        // Write code...
    }

    @Override
    public String getTipoDeBateria() {
        // Write code...
    }

    @Override
    public int getAutonomia() {
        return duracion;
    }

    @Override
    public int getPeso() {
        return peso;
    }

    @Override
    public int getAncho() {
        return ancho;
    }

    @Override
    public int getAlto() {
        return alto;
    }

    @Override
    public int getGrosor() {
        return grosor;
    }

    @Override
    public void setMarca(String marca) {
        this.marca = marca;
    }

    @Override
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    @Override
    public void setReproduceSonido(boolean sonido) {
        this.sonido = sonido;
    }

    @Override
    public void setReproduceVideo(boolean video) {
        this.video = video;
    }

    @Override
    public void setTipoDeAlmacenamiento(String almacenamiento) {
        // Write code...
    }

    @Override
    public void setCapacidadDelAlmacenamiento(int capacidad) {
        this.capacidad = capacidad;
    }

    @Override
    public void setPantalla(String pantalla) {
        // Write code...
    }

    @Override
    public void setTipoDeBateria(String bateria) {
        // Write code...
    }

    @Override
    public void setAutonomia(int duracion) {
        this.duracion = duracion;
    }

    @Override
    public void setPeso(int peso) {
        this.peso = peso;
    }

    @Override
    public void setAncho(int ancho) {
        this.ancho = ancho;
    }

    @Override
    public void setAlto(int alto) {
        this.alto = alto;
    }

    @Override
    public void setGrosor(int grosor) {
        this.grosor = grosor;
    }
    
}
