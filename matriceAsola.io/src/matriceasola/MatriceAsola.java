/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package matriceasola;
import java.io.*;
/**
 *
 * @author studenti
 */
public class MatriceAsola {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        InputStreamReader tastiera = new InputStreamReader(System.in);
        BufferedReader input=new BufferedReader(tastiera);
        int n=7,i,j=7,cont=1;
        int[][] mat=new int[n][]; 
        for(i=0;i<n;i++){
            mat[i]=new int[j];
            if(i<n/2)
                j=j-2;
            else
                j=j+2;
        
    }
        for(i=0;i<=n/2;i++) {
	for(j=0;j<mat[i].length;j++){
		mat[i][j]=cont;
                cont++;
              }
}
        cont=1;
        
        for(i=n-1;i>3;i--){
            for(j=0;j<mat[i].length;j++){
            mat[i][j]=cont;
            cont++;
            }
        }
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[i].length;j++){
                System.out.print(mat[i][j]+"\t");
                }
            System.out.println();
            if((i==0)||(i==4))
                System.out.print("\t");
            if((i==1)||(i==3))
                System.out.print("\t\t");
            if(i==2)
                System.out.print("\t\t\t");
            }
    }
}
