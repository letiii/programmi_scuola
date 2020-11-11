/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package eseprepverifica;
import java.io.*;
/**
 *
 * @author Leticia
 */
public class EsePrepVerifica {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException{
        // TODO code application logic here
        InputStreamReader tastiera=new InputStreamReader(System.in);
        BufferedReader input=new BufferedReader(tastiera);
        String frase;
        int i,n,k,cont;
        char t;
        String lettere=" aeiou";
        System.out.println("inserire una frase:   ");
        frase=input.readLine();
        n=frase.length();
        for(i=0;i<n;i++){
            t=frase.charAt(i);
            cont=0;
            for(k=0;k<6;k++){
                if(t==lettere.charAt(k))
                    cont++;
}
            if(cont==0)
                System.out.print(t);
    }  
        }    
    
}
