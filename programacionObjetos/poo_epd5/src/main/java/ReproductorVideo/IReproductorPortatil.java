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
public interface IReproductorPortatil {
    
    // METODOS GET
    public String getMarca();
    public String getModelo();
    public boolean getReproduceSonido();
    public boolean getReproduceVideo();
    public String getTipoDeAlmacenamiento();
    public int getCapacidadDelAlmacenamiento();
    public String getPantalla();
    public String getTipoDeBateria();
    public int getAutonomia();
    public int getPeso();
    public int getAncho();
    public int getAlto();
    public int getGrosor();
   
    // METODOS SET
    public void setMarca(String marca);
    public void setModelo(String modelo);
    public void setReproduceSonido(boolean sonido);
    public void setReproduceVideo(boolean video);
    /*
        setTipoDeAlmacenamiento
        
        Declarar las constantes:
            CD, DVD, MemoriaFlash, Minidisk
    */
    public void setTipoDeAlmacenamiento(String almacenamiento);
    public void setCapacidadDelAlmacenamiento(int capacidad);
    /*
        setPantalla
        
        Declarar las constantes:
            Ninguna, texto, Monocromo, Color
    */
    public void setPantalla(String pantalla);
    /*
        setTipoDeBateria
        
        Declarar las constantes:
            Pilas,Li-Ion
    */
    public void setTipoDeBateria(String bateria);
    public void setAutonomia(int duracion);
    public void setPeso(int peso);
    public void setAncho(int ancho);
    public void setAlto(int alto);
    public void setGrosor(int grosor);
    
    // CONSTANTES
    int CD = 1;
    int DVD = 2;
    int MemoriaFlash = 3;
    int Minidisk = 4;
    
    int Ninguna = 10;
    int texto = 11;
    int Monocromo = 12;
    int Color = 13;
    
    int Pilas = 20;
    int LiIon = 21;
    
}
