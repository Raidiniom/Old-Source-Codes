import java.util.*;
// Machine Problem #2 - MidTerm
class DistanceChild 
{
    public float InputDistance; // The inputed distance
    public float KiloToMeters; // Converts input into Kilometer
    public float FirstThreeHun; // 300 meters are subtract but it adds 20 pesos to the total fare
    public float TotalFare; // The ride fare itself

    //Doing the calculations
    public void display()
    {
        KiloToMeters = InputDistance * 1000;
        if(InputDistance > 200)
        {
            FirstThreeHun = KiloToMeters - 300;
            TotalFare = (FirstThreeHun / 200) * 2 + 20;
        }
        else
        {
            TotalFare = 20;
        }

        System.out.print("\n=---=---=---=---=---= ");
        System.out.printf("\nTotal Fare: %.2f Pesos",TotalFare);
        System.out.print("\n=---=---=---=---=---= \n");
    }
}

// System.out.print(" ");