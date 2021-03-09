package ejercicios.ej3;
public class Principal {
    public static void main (String[] args){
        // Definimos nuevo semaforo
        Semaforo s1 = new Semaforo();
        s1.imprimir();
        // Cambiamos a un color incorrecto
        s1.setColor(4);
        s1.imprimir();
        // Cambiar el color a verde
        s1.setColor(2);
        s1.imprimir();
        // Poner parpadeando = true
        s1.setParpadeando(true);
        s1.imprimir();
        // Cambiar color a ambar
        s1.setColor(1);
        s1.imprimir();
        // Poner parpadeando = true
        s1.setParpadeando(true);
        s1.imprimir();
        // Llamar 5 veces al metodo cambio (usar bucle)
        int i;
        for (i=0;i<=5;i++){
            s1.cambia();
        }
        s1.imprimir();
    }
}
