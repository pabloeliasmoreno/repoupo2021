package puntopixel;

import java.awt.BorderLayout;

public class Principal {
    public static void main(String[] args){
        Punto pt1 = new Punto();
        Punto pt2 = new Punto(2,3);
        
        System.out.println("Punto: x="+pt1.getX()+" - y="+pt1.getY());
        
        pt1.setX(5);
        
        System.out.println("Punto: x="+pt1.getX()+" - y="+pt1.getY());
        System.out.println("Punto: x="+pt2.getX()+" - y="+pt2.getY());
        
        System.out.println("Punto pt1:"+pt1);
        
        if(pt1.equals(pt2)){
            System.out.println(pt1+" ES IGUAL A "+pt2);
        }
        else{
            System.out.println(pt1+" ES DISTINTO A "+pt2);
        }
        
        pt1.mover(pt2);
        
        if(pt1.equals(pt2)){
            System.out.println(pt1+" ES IGUAL A "+pt2);
        }
        else{
            System.out.println(pt1+" ES DISTINTO A "+pt2);
        }
    }
}
