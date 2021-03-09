package vehiculos;

public class Coche {
    //Atributos
    String color;
    String marca;
    int kms;
    
    //Metodo
    public static void main(String [] args){
        Coche coche1 = new Coche();
        
        coche1.color = "Blanco";
        coche1.marca = "Audi";
        coche1.kms = 0;
        
        System.out.println("El color del coche es: "+coche1.color);
        System.out.println("La marca del coche es: "+coche1.marca);
        System.out.println("El kilometraje del coche es: "+coche1.kms);
        
        Coche coche2 = new Coche();
        coche2.color = "Rojo";
        coche2.marca = "Ferrari";
        coche2.kms = 100;
        
        System.out.println("\nEl color del coche es: "+coche2.color);
        System.out.println("La marca del coche es: "+coche2.marca);
        System.out.println("El kilometraje del coche es: "+coche2.kms);
        
    }
}
