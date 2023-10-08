// Yamaha the Superclass or the Parent class
class Yamaha{
   public void YamahaMade()
   {
   // This part will be overriden by the Child class
      System.out.println("This Product is from Yamaha ");
   }

}

class Piano extends Yamaha{
   @Override 
   // Overrides the YamahaMade from the Parent Class Yamaha
   // Child class overriding the YamahaMade
   public void YamahaMade()
   {
      System.out.println("the Brand of this Piano is Yamaha");
   }

}



class Bike extends Yamaha
{
   @Override
   public void YamahaMade()
   {
      // Overrides the YamahaMade from the Parent Class Yamaha
      // Child class overriding the YamahaMade
      System.out.println("the Brand of this Motor Bike is Yamaha ");
    
   }
 
}

