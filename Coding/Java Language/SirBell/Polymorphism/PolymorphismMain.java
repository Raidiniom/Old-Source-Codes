class PolymorphismMain
{
  public static void main(String args[])
  {
   // Yamaha Brands has Pianos, Bikes , Guitars
   // This Example is a Runtime Polymorphism
   // Yamaha the Parent or the Superclass
    Yamaha yamaha = new Yamaha();
    Yamaha yamaha_piano = new Piano();
    Yamaha yamaha_guitar = new Guitar();
    Yamaha yamaha_bike = new Bike();
    
    
    yamaha.YamahaMade();
    yamaha_piano.YamahaMade();
    yamaha_guitar.YamahaMade();
    yamaha_bike.YamahaMade();
  
  }
  
}