abstract class Laptop
 {
      // Abstract method (does not have a body)
      public abstract void Netbook();
      // Regular method
      public void made() {
         System.out.println("Laptop ");
         System.out.println("-------------------");
      }
   }   
      //sublcass
      class Dell extends Laptop {
         public void Netbook() {
         // Laptop
            System.out.println("Dell Inspiron N5010");
            System.out.println("i3 Intel Core");
            System.out.println("Without GPU");
            System.out.println("Year 2009");
         }
      }
      class Acer extends Laptop {
         public void Netbook()
         {
            System.out.println("Acer Nitro");
            System.out.println("I7 Intel Core");
            System.out.println("With GPU");
            System.out.println("RTX 3050 Ti");
            System.out.println("Year 2021");
         }
      }
    

class Main {
 // Main Class 
   public static void main(String[] args)
    {
      Dell myDell = new Dell(); 
      myDell.Netbook();
      myDell.made();
      
      Acer myAcer = new Acer();
      myAcer.Netbook(); 
      myAcer.made();  
         
    }
}
