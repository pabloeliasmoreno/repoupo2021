package problema.p3;

public class Climatizador {
    private boolean encendido;
    private float temperaturaActual;
    private float temperaturaDeseada;
    
    // Constructor por defecto
    public Climatizador(){
        encendido = false;
        temperaturaActual = 12F;
        temperaturaDeseada = 25.5F;
    }
    
    // Constructor con parametros de entrada
    public Climatizador(boolean encendido, float temperaturaActual, float temperaturaDeseada){
        this.encendido = encendido;
        this.temperaturaActual = temperaturaActual;
        this.temperaturaDeseada = temperaturaDeseada;
    }
    
    // Definimos la temperatura actual
    public void setTemperaturaActual(float temperaturaActual){
        if (!isEncendido()){
            this.temperaturaActual = temperaturaActual;
            System.out.println("[STATUS][TEMP]: Temperatura Actual definida a "+temperaturaActual);
        }
    }
    
    // Definimos la temperatura deseada
    public void setTemperaturaDeseada(float temperaturaDeseada){
        if (!isEncendido()){
            this.temperaturaDeseada = temperaturaDeseada;
            System.out.println("[STATUS][TEMP]: Temperatura Deseada definida a "+temperaturaDeseada);
        }
    }
    
    // Devolvemos la temperatura actual
    public float getTemperaturaActual(){
        return temperaturaActual;
    }
    
    // Devolvemos la temperatura deseada
    public float getTemperaturaDeseada(){
        return temperaturaDeseada;
    }
    
    // Indicamos si esta o no encendido el climatizador
    public boolean isEncendido(){
        return encendido;
    }
    
    // Activamos el climatizador
    public void activar(){
        if(!isEncendido()){
            encendido = true;
            System.out.println("[STATUS][ACTIV]: Sistema activado ");
            if(temperaturaActual>temperaturaDeseada){
                enfriar();
            }
            if(temperaturaActual<temperaturaDeseada){
                calentar();
            }
        } else {
            System.out.println("[ERROR]: El sistema se encontraba activado");
        }
    }
    
    // Desactivamos el climatizador
    public void desactivar(){
        if(isEncendido()){
            encendido = false;
            System.out.println("[STATUS][ACTIV]: Sistema desactivado ");
        } else {
            System.out.println("[ERROR]: El sistema se encontraba desactivado");
        }
    }
    
    // Enfria el ambiente bajando en 0.5
    private void enfriar(){
        while(temperaturaActual!=temperaturaDeseada){
            this.temperaturaActual = temperaturaActual - 0.5F;
            System.out.println("[STATUS][TEMP]: Bajando temperatura. Temperatura actual: "+temperaturaActual);
        }
    }
    
    // Calienta el ambiente bajando en 0.5
    private void calentar(){
        while(temperaturaActual!=temperaturaDeseada){
            this.temperaturaActual = temperaturaActual + 0.5F;
            System.out.println("[STATUS][TEMP]: Subiendo temperatura. Temperatura actual: "+temperaturaActual);
        }
    }
    
}
