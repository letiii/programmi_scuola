/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12.punto;

/**
 *
 * @author BAGLIO
 */
public class Triangolo {
    Puntoo A, B, C;
    
    public Triangolo(Puntoo A, Puntoo B, Puntoo C){
        this.A=A;         
        this.B=B;
        this.C=C;
    }
    public double perimetro(){
        double per, a,b,c;
        /*
        double a,b,c;
        a=A.distanza(B);
        b=B.distanza(C);
        c=C.distanza(A);
        per=a+b+c;
        */
        per=latoAB()+latoBC()+latoAC();
        return per;
    }
    public double latoAB(){
        double a;
        a=A.distanza(B);
        return a;
    }
    public double latoBC(){
        double a;
        a=B.distanza(C);
        return a;
    }
    public double latoAC(){
        double a;
        a=A.distanza(C);
        return a;
    }
}
