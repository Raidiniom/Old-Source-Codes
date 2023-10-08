import java.util.Arrays;
import java.util.Scanner;
// MidtermExam - Item List
class MidtermExamIL 
{
    public static int ChoosenNum;

    public void ItemList()
    {
        int Start;
        String[] ListOfItems = new String[ChoosenNum];
        float[] ListOfPrices = new float[ChoosenNum];

        Scanner input = new Scanner(System.in);

        System.out.print("\n---: List :--- \n");
        for(Start = 0; Start < ChoosenNum; Start++)
        {
            System.out.print("Enter item: ");
            ListOfItems[Start] = input.nextLine();
        }

        System.out.print("\n---: Price :--- \n");
        for(Start = 0; Start < ChoosenNum; Start++)
        {
            System.out.print("Set price: ");
            ListOfPrices[Start] = input.nextFloat();
        }
        
        System.out.print("\nHere is your Item List: ");
        System.out.print(Arrays.toString(ListOfItems));
        System.out.print("\nIts Prices: ");
        System.out.print(Arrays.toString(ListOfPrices));
    }

    public void ItemPick()
    {
        Boolean Finish = true;
        int Pick;
        String FinishPick;
        float ItemAmount;
        int ItemCheck;
        float TotalItems = 0;
        int ItemPick;

        float[] NumberOfItems = new float[ChoosenNum];

        
        Scanner input = new Scanner(System.in);

        while(Finish) 
        {
            System.out.print("\nChoice ");
            System.out.print("\nNote: First Item Starts with 0 then so on and so forth! ");
            System.out.print("\n[1] - Choose an Item [2] - Check Amount of Items\n");
            Pick = input.nextInt();
            switch (Pick) {
                case 1:
                    System.out.print("Pick 1 Item to buy: ");
                    ItemPick = input.nextInt();
                    System.out.print("How many Item/s: ");
                    ItemAmount = input.nextFloat();

                    NumberOfItems[ItemPick] = ItemAmount;
                    TotalItems += NumberOfItems[ItemPick];
                break;
                case 2:
                    System.out.print("What Item was it? ");
                    ItemCheck = input.nextInt();
                    System.out.print("It has "+TotalItems);
                break;
                default:
                    System.out.print("*Item not Listed*");
                break;
            }

            System.out.print("\nDo you want to add more Items? [Y] - yes / [N] - no \n");
            FinishPick = input.next();
            if(FinishPick.equalsIgnoreCase("Y"))
            {
                Finish = true;
            }
            else if(FinishPick.equalsIgnoreCase("N"))
            {
                Finish = false;
            }
        }
    }
}

// System.out.print(" ");