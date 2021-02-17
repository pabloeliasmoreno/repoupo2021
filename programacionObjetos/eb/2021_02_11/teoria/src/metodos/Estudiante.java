package metodos;

/**
 *
 * @author Manuel Jesus Flores Montano
 */
public class Estudiante {
    private String nombre;
    private float nota;
    
    public Estudiante(String n){
        nombre = n;
    }
    
    public Estudiante(String n, float no){
        this(n);
        
    }
    
    public Estudiante(){}
    
    // Con get accedemos a elementos privados
    public String getNombre(){
        return nombre;
    }
    
    public float getNota(){
        return nota;
    }
    
    // Con set modificamos un elemento privado
    public void setNota(float no){
        if(no>=0 && no<=10){
            this.nota = no;
        } else {
            System.out.println("No se puede introducir una nota negativa");
        }
        
    }
    
    public void imprimir(){
        System.out.println("Nombre: "+nombre+" NOTA: "+nota);
    }
}
