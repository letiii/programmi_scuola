/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package tabelline;

/**
 *
 * @author studenti
 */
public class Tabelline {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int i,j;
        int ris;
        for(i=1;i<11;i++){
            for(j=1;j<11;j++){
                ris=i*j;
                System.out.print(ris+"  ");
                
            }
            System.out.print("\n");
        
    }
}
