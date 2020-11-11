/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package tabellinecolonne;
import java.io.*;
/**
 *
 * @author studenti
 */
public class TabellineColonne {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        InputStreamReader tastiera = new InputStreamReader(System.in);
        BufferedReader input = new BufferedReader(tastiera);
        int m=10,i,n,j;
        int[][]mat;
        mat =new int[m][];
        for(i=0;i<m;i++){
            System.out.print("inserire il numero di colonne nella riga  "+i+"\t");
            n=Integer.parseInt(input.readLine().trim());
            mat[i]=new int[n];
        }
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[i].length;j++){
                mat[i][j]=(i+1)*(j+1);
                System.out.print(mat[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
