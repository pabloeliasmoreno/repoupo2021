package ejercicios.ej3;

/**
 *
 * @author Manuel
 */
public class Semaforo {
    private int color;
    private boolean parpadeando;
    
    // Obtenemos el color del semaforo
    public int getColor(){
        return color;
    }
    
    // Modificamos el color del semaforo
    public void setColor(int color){
        if (color == 0 || color == 2){
            this.color = color;
            parpadeando = false;
        } else if (color == 1){
            this.color = color;
        }
    }
    
    // Indicamos si el semaforo esta parpadeando
    public boolean isParpadeando(){
        return parpadeando;
    }
    
    // Hacer que el semaforo parpadee
    public void setParpadeando(boolean parpadeando){
        if(parpadeando == false || (parpadeando == true && color == 1)){ // Comprobamos que esta en ambar
            this.parpadeando = parpadeando;
        }
    }
    
    // Indicamos el color actual del semaforo
    public String cadenaColor(){
        String s = null;
        switch(color){
            case 0: s = "Rojo"; break;
            case 1: s = "Ambar"; break;
            case 2: s = "Verde"; break;
        }
        return s;
    }
    
    // Imprime por pantalla el estado del semaforo
    public void imprimir(){
        if(parpadeando){
            System.out.println("Semaforo en "+cadenaColor()+" parpadeando.");
        } else {
            System.out.println("Semaforo en "+cadenaColor());
        }
    }
    
    // Cambia el semaforo al estado siguiente
    /*
        Orden de Estados:
        VERDE, AMBAR PARPADEANDO, AMBAR, ROJO
    */
    public void cambia(){
        switch(color){
            case 0:
                setColor(2); break;
            case 1:
                if (parpadeando)
                    setParpadeando(false);
                else
                    setColor(0);
                break;
            case 2:
                setColor(1);
                setParpadeando(true);
                break;
        }
    }
}
