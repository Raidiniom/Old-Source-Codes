import java.util.Scanner;

public class TwoDArrayInput{
    
   public static void main(String args[]){
        
      int rows;
      int columns;
      Scanner scan=new Scanner(System.in);
      System.out.print("Enter 2D array rows : ");
      rows=scan.nextInt();
      System.out.print("Enter 2D array columns : ");
      columns=scan.nextInt();
       
       // Here we Input the Elements of the Array
      System.out.println("Enter array elements : ");    
        
       // Initialize the Array 
      int twoD[][]=new int[rows][columns];
        
         /* Note Array starts with 0 Zero  */
      
         
      for(int i=0; i<rows;i++)
      {            
         // Here we Indicate the Row number 
         System.out.print("Row :"+ i +" \n");
         for(int j=0; j<columns;j++)
         {
            // Here we Indicate the Column number 
            System.out.print("columns :" + j + " \n");
            twoD[i][j]=scan.nextInt();
         }
      }
         // This Displays your inputted Data from the Array
      System.out.print("\nData you've entered : \n");
        // array for display 
      for(int []x:twoD){
         for(int y:x){
            System.out.print("|| "+y+" ");
         }
         System.out.println();
      }
        
   }  
    
}