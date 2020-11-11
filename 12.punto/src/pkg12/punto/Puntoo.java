/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12.punto;
/**
 *
 * @author studenti
 */
public class Puntoo {
    /**
     *
     */
    protected float x;
    protected float y;

public Puntoo(){
   x=0;
   y=0;
}
public Puntoo(float x){
    this.x=x;
    y=0;
}
public Puntoo(float x, float y ){
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
    int quad = 0;
       if((this.x==0)&&(this.y==0))
           System.out.println("il punto coincide con l'origine degli assi");
       if((this.y==0)&&(this.x!=0))
           System.out.println("il punto e' sull'asse delle x");
       if((this.x==0)&&(this.y!=0))
           System.out.println("il punto e' sull'asse delle y");
        if((this.x>0)&&(this.y>0)){
            quad=1;
            System.out.println("il punto si trova nel "+quad+" quadrante");
            }
        if((this.x<0)&&(this.y>0)){
            quad=2;
            System.out.println("il punto si trova nel "+quad+" quadrante");
            }
        if((this.x<0)&&(this.y<0)){
            quad=3;
            System.out.println("il punto si trova nel "+quad+" quadrante");
            }
        if((this.x>0)&&(this.y<0)){
            quad=4;
            System.out.println("il punto si trova nel "+quad+" quadrante");
            }
    
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
