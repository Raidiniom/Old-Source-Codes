import java.util.Scanner;

class compareString
{
    public static void main(String args[])
    {
        int tries = 5;
        String text;
        boolean repeatGuese = true;

        Scanner input = new Scanner(System.in);

        while(tries == 0 && repeatGuese == true)
        {
            System.out.println("Guese the Hidden Letter!");
            System.out.println("Only "+ tries +" tries!");
            System.out.print("Letter here: ");
            text = input.nextLine();

            if(text.equals("n"))
            {
                repeatGuese = false;
                System.out.println("You guese right!");
            }
            else
            {
                repeatGuese = true;
                tries--;
                System.out.println("gease again!");
            }
        }
    }
}