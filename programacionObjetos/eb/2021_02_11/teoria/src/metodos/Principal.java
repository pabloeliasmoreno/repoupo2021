package metodos;

/**
 *
 * @author Manuel Jesus Flores Montano
 */
public class Principal {
    public static void main(String[] args){
        
        // Lampara l = new Lampara("Philips");
        //Lampara l2 = new Lampara("Siemens");

        //l2.imprimir();
        
        Estudiante e = new Estudiante("Marta Lopez");
        Estudiante e2 = new Estudiante("Antonio Perez", 5.7F);
        //e2.imprimir();
        System.out.println("La alumna se llama "+e.getNombre() + " y ha sacado un "+e.getNota());
        e.setNota(-9);
        System.out.println("La alumna se llama "+e.getNombre() + " y ha sacado un "+e.getNota());
        //Estudiante e3 = new Estudiante();
        e2.imprimir();
        int a;
    }
}
