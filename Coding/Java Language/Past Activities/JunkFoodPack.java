import java.util.Scanner;

class MachineProblem3
{
    public static void main(String args[])
    {
        //JK = Junk Food
        int[] listofJK = new int[4];
        int choosenBrand;
        int inputedQuantity;
        int brandCheck = 0;
        int userChoice;
        int totalPacks = 0;
        boolean goAgain = true;
        String chooseAgain = " ";
       
        Scanner input = new Scanner(System.in);
        //Menu
        System.out.println("Available Junk Foods:");
        System.out.println("(1)Chippy \n(2)Piatos");
        System.out.println("(3)Nova \n(4)Roller Coaster \n");
        //User choice
        System.out.println("Control:");
        System.out.println("Press (0) to add how many packs of junk food/s");
        System.out.println("Press (1) to check the amount added/entered \n");
       
        while(goAgain)
        {
            System.out.println("Enter control: ");
            userChoice = input.nextInt();
            switch(userChoice)
            {
                case 0:
                    System.out.println("What Brand do you like to have: ");
                    choosenBrand = input.nextInt();
                    System.out.println("How many packs do you like: ");
                    inputedQuantity = input.nextInt();
                    listofJK[choosenBrand] = inputedQuantity;
                    totalPacks += listofJK[choosenBrand];
                    System.out.println("Thanks for Choosing!");
                break;
                case 1:
                    System.out.println("What Brand would it be? ");
                    brandCheck = input.nextInt();
                    System.out.println("It has "+totalPacks+" packs.");
                break;
                default:
                    System.out.println("We do not have that brand!");
                break;
            }
           
            //User choice to go again
            System.out.print("Do you want to go again? [Y]yes / [N]no ");
            chooseAgain = input.next();
            if(chooseAgain.equalsIgnoreCase("Y"))
            {
                goAgain = true;
            }
            else if(chooseAgain.equalsIgnoreCase("N"))
            {
                goAgain = !goAgain;
            }
        }
        System.out.println("Thanks for Buying!");
    }
}

// System.out.println(" ");
