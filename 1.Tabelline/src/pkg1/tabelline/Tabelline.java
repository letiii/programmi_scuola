/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg1.tabelline;
import java.io.*;//importo tutte le classi del package java.io
/**
 *
 * @author studenti
 */
public class Tabelline {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException{
        // TODO code application logic here
        /*
         *InputStreamReader tastiera; //dichiarazione dell'oggetto tastiera
         *tastiera=new InputStreamReader(System.in); //ho istanziato l'oggetto tastiera della classe InputStreamReader 
         */
        InputStreamReader tastiera=new InputStreamReader(System.in);
        BufferedReader input=new BufferedReader(tastiera);
        //BufferedReader input=new BufferedReader(new InputStreamReader(System.in));
        int x,y,i,n;
        String nome;
        System.out.print("inserisci il tuo nome: ");
        nome=input.readLine();
        System.out.print("inserire un numero positivo: ");
        n=Integer.parseInt(input.readLine().trim());
        
        for(i=1;i<=n;i++){
                 
                 for(y=1;y<=10;y++){
                            x=i*y;
                            System.out.print(x+"\t");
                 }
                 System.out.println();
        }
    }
}
