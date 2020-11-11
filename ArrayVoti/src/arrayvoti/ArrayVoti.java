/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package arrayvoti;
import java.io.*;
import java.util.Random;
/**
 *
 * @author studenti
 */
public class ArrayVoti {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        InputStreamReader tastiera = new InputStreamReader (System.in);
        BufferedReader input = new BufferedReader(tastiera);
        int n,m,i,j,somma;
        float media;
        Random generatore;
        generatore = new Random();
        String[] array;
        System.out.println("inserire il numero di persone");
        n=Integer.parseInt(input.readLine().trim());
        array=new String[n];
        int[][]mat=new int[n][];
        for(i=0;i<n;i++){
            System.out.println("inserire il nome");
            array[i]=input.readLine();
           System.out.println("inserire il numero dei voti di "+array[i]);
           m=Integer.parseInt(input.readLine().trim());
           mat[i]=new int[m];
     }
        
       for(i=0;i<n;i++){
           for(j=0;j<mat[i].length;j++){
               mat[i][j]=generatore.nextInt(10)+1;
           }
           }
       for(i=0;i<n;i++){
           somma=0;
           System.out.println(array[i]+"\t");
           for(j=0;j<mat[i].length;j++){
               System.out.print(mat[i][j]+"\t");
               somma=somma+mat[i][j];
           }
           media=somma/mat[i].length;
           System.out.println("MEDIA\t"+media);
           }
       }
    }

