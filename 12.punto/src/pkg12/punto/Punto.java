/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg12.punto;
import java.io.*;

/**
 *
 * @author studenti
 */
public class Punto {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException{
        InputStreamReader t=new InputStreamReader (System.in);
        BufferedReader input= new BufferedReader (t);
        Puntoo p1,p2,pm;
        int l,x,y,n,scelta;
        double d;
        System.out.println("Punto 1:\n1.origine\n2.assex\n3.casuale");
        l=Integer.parseInt(input.readLine().trim());
        if(l==1)
            p1=new Puntoo();
        else
            if(l==2){
                x=(int)(Math.random()*100);
                p1=new Puntoo(x);
            }
            else{
                x=(int)(Math.random()*100);
                y=(int)(Math.random()*100);
                p1=new Puntoo(x,y);
            
            }
        System.out.println("Punto 2:\n1.origine\n2.assex\n3.casuale");
        l=Integer.parseInt(input.readLine().trim());
        if(l==1)
            p2=new Puntoo();
        else
            if(l==2){
                x=(int)(Math.random()*100);
                p2=new Puntoo(x);
            }
            else{
                x=(int)(Math.random()*200-100);
                y=(int)(Math.random()*200-100);
                p2=new Puntoo(x,y);
            
            }
        System.out.println("il punto 1 ha cordinate:\tx="+p1.getX()+"\ty="+p1.getY());
        System.out.println("il punto 2 ha cordinate:\tx="+p2.getX()+"\ty="+p2.getY());
        do{
            System.out.println("0.per terminare\n1.per vedere la posizione\n2.per calcolare la distanza\n3.per calcolare il punto medio");
            scelta=Integer.parseInt(input.readLine().trim());
            switch(scelta){
                case 0: 
                        break;
                case 1:
                        p1.posizione();
                        p2.posizione();
                        break;
                case 2:
                        d=p1.distanza(p2);
                        System.out.println("la distanza tra ("+p1.getX()+","+p1.getY()+") e ("+p2.getX()+","+p2.getY()+") e': "+d);
                        break;
                case 3:
                        pm=p1.medio(p2);
                        System.out.println("il punto medio tra ("+p1.getX()+","+p1.getY()+") e ("+p2.getX()+","+p2.getY()+") e': ("+pm.getX()+","+pm.getY()+")");
                        break;
                                
                default: System.out.println("scelta errata");
            }
        }while(scelta!=0);
         
    }
}
