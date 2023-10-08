import java.util.*;
// Machine Problem #2 - MidTerm
class DistanceMain 
{
    public static void main(String args[])
    {
        DistanceChild fare = new DistanceChild();

        float Distance;
        boolean NotANumber = true;

        Scanner input = new Scanner(System.in);

        while(NotANumber)
        {
            System.out.print("Note - It must be in Kilometers! ");
            System.out.print("\nEnter the Distance: ");
            if(input.hasNextFloat())
            {
                Distance = input.nextFloat();
                fare.InputDistance = Distance;
                fare.display();
                NotANumber = true;
            }
            else
            {
                System.out.print("\nMust Enter a Number not a Letter ");
                NotANumber = false;
            }
        }
    }
}

// System.out.print(" ");