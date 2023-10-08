import java.util.Scanner;

public class NumbernotLetter
{
    public static void main(String[]args)
    {
        int Number;
        int Repeat = 0;
        boolean Loop = true;
       
        Scanner input = new Scanner(System.in);

        System.out.println("You can only enter 10 numbers not letters");
        while(Repeat < 10 && Loop)
        {
            System.out.println("enter a number:");
            if(input.hasNextInt())
            {
                Number = input.nextInt();
                System.out.println(Number+ " is a Number");
            }
            else
            {
                System.out.println("Hey! I asked a number not a letter! goodbye!");
                Loop = false;
            }
            Repeat++;
        }
        System.out.println("All 10 attempts are used! Thank you for following instrction.");
    }
}
