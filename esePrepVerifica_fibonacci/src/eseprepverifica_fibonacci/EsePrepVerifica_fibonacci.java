/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package eseprepverifica_fibonacci;
import java.io.*;
/**
 *
 * @author Leticia
 */
public class EsePrepVerifica_fibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        InputStreamReader tastiera = new InputStreamReader(System.in);
        BufferedReader input=new BufferedReader(tastiera);
        int n=14,i,j;
        int [][]mat;
        int[]fibonacci;
        do{
        System.out.println("inserire il numero di righe");
        n=Integer.parseInt(input.readLine().trim());
        }while((n>=12)||(n<0));
        fibonacci=new int[n];
        mat=new int[n][];
        for(i=0;i<n;i++){
            if((i==0)||(i==1))
                fibonacci[i]=1;
            else
                fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
            mat[i]=new int [fibonacci[i]];
             }
        for(i=0;i<n;i++){
            for(j=0;j<mat[i].length;j++){
                mat[i][j]=i*j;
                System.out.print(mat[i][j]+"\t");
            }
            System.out.println();
        }
    }
    }

