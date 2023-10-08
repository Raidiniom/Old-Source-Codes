import java.util.Scanner;
// MidtermExam - Main
class MidtermExam {
    public static void main(String args[]){
        // All the 3 classes
        MidtermExamCusIn presentCusIn = new MidtermExamCusIn();
        MidtermExamIL presentIL = new MidtermExamIL();
        MidtermExamIN presentIN = new MidtermExamIN();
        
        Boolean MinimumFive = true;
        int NumItem;

        Scanner input = new Scanner(System.in);

        System.out.print("--------\n");
        System.out.print("Note: Minimum of 5 items for the list \n");
        while(MinimumFive)
        {
            System.out.print("Enter number of Items: ");
            NumItem = input.nextInt();

            if (NumItem < 5) 
            {
                System.out.print("Note: Minimum of 5 items for the list \n");
                MinimumFive = true;
            } 
            else 
            {
                MinimumFive = false;
                presentIL.ChoosenNum = NumItem;
            }
        }

        // User making and choosing the Item List
        System.out.print("\n");
        presentIL.ItemList();

        // Asking User Information
        System.out.print("\n");
        presentCusIn.AskInfo();

        // User picking an Item
        presentIL.ItemPick();

        // Invoice
        presentIN.Invoice();
    }
}

// System.out.print(" ");