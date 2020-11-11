/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package eseprepverifica_ordinostringhe;
import java.io.*;
/**
 *
 * @author Leticia
 */
public class EsePrepVerifica_ordinoStringhe {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        InputStreamReader tastiera =new InputStreamReader (System.in);
        BufferedReader input = new BufferedReader(tastiera);
        int n,i,j;
        String temp;
        String[]array;
        System.out.println("inserire il numero delle parole");
        n=Integer.parseInt(input.readLine().trim());
        array=new String[n];
        for(i=0;i<n;i++){
            System.out.println("inserire la parola in posizione "+i);
            array[i]=input.readLine();
    }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(array[i].compareTo(array[j])>0){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
            System.out.println(array[i]);
    }
}
