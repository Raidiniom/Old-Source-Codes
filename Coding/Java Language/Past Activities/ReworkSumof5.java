import java.util.Scanner;

class ReworkSumof5 
{
    public static void main(String args[])
    {
        int tries = 0;
        int total = 0;
        boolean repeat = true;
        String text = " ";

        Scanner input = new Scanner(System.in);

        while(tries < 5 && repeat)
        {
            System.out.println("Enter your Number:");
            text = input.nextLine();

            if(text.equalsIgnoreCase("N"))
            {
                repeat = true;
                System.out.println("Entered Total is " +total);    
            }
            else
            {
                int number = Integer.parseInt(text);
                total += number;
                tries++;
            }
           
            if(tries >=5)
            {
                System.out.println("Entered Total is " +total);
                tries = 0;
                total = 0;
            }
        }
    }
}


// System.out.print(" ");