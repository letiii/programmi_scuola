/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12.punto;
import java.util.*;
import java.lang.Math;

/**
 *
 * @author studenti
 */
public class Puntoo {
   private float x;
   private float y;

public Puntoo(){//costruttore per creare un punto nell'origine
   x=0;
   y=0;
}
public Puntoo(float x){//costruttore per creare un punto sull'asse x
    this.x=x;
    y=0;
}
public Puntoo(float x, float y ){//costruttore per creare un punto qualsiasi
    this.x=x;
    this.y=y;
}
public float getX(){
    return x;
}
public float getY(){
    return y;
}
public void setX(float x){
    this.x=x;
}
public void setY(float y){
    this.y=y;
}
public void posizione(){
    if(x>0)
            if(y>0)
                System.out.println("il punto di coordinate ("+x+","+y+") si trova nel primo quadrante");
            else
                if(y<0)
                    System.out.println("il punto di coordinate ("+x+","+y+") si trova nel quarto quadrante");
                else
                    System.out.println("il punto di coordinate ("+x+","+y+") si trova sull'asse delle X");
    else //x<=0
            if(x<0)
                if(y>0)
                    System.out.println("il punto di coordinate ("+x+","+y+") si trova nel quarto quadrante");
                else
                    if(y<0)
                        System.out.println("il punto di coordinate ("+x+","+y+") si trova nel terzo quadrante");
                    else 
                        System.out.println("il punto di coordinate ("+x+","+y+") si trova sull'asse delle X");
            else 
                System.out.println("il punto di coordinate ("+x+","+y+") si trova sull'asse delle Y");
    
}
public double distanza(Puntoo p){
    double i;
    i=Math.pow(x-p.x,2)+Math.pow(y-p.y,2);
    i=Math.sqrt(i);
    return i;
}
public Puntoo medio(Puntoo p){
    Puntoo pm=new Puntoo();
    pm.x=(x+p.x)/2;
    pm.y=(y+p.y)/2;
    return pm;
}

}
