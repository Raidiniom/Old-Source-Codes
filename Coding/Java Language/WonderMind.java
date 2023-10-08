import java.util.*;

class WM
{
    public static void main(String[]args)
    {
        //User information
        String userfirstname;
        String userlastname;
        int age;
        int Bday;
        int Bmonth;
        int Byear;

        //lets the user choose
        int choice;

        Scanner input = new Scanner(System.in);

        System.out.println("Good Day User!");
        System.out.println("Enter your first name: ");
        userfirstname = input.nextLine();
        System.out.println("Enter your last name: ");
        userlastname = input.nextLine();
        
        System.out.println("Enter your age: ");
        age = input.nextInt();

        System.out.println("Enter your birth data: \nday \nmonth \nyear");
        Bday = input.nextInt();
        Bmonth = input.nextInt();
        Byear = input.nextInt();

        System.out.println("Do you want to register for license? [1]YES or [2]NO:");
        choice = input.nextInt();

        //User Profile presentation for spell and fact check
        System.out.println("Username: "+userfirstname +userlastname);
        System.out.println("Age: "+age);
        System.out.println("BirthDay: "+Bday +Bmonth +Byear);

        //To check if the user is at age
        if(choice == 1)
        {
            if(age<18)
            {
                System.out.println("You can not register since you are underage. \nCome back when you are 18 years old!");
            }
            else if(age>=18)
            {
                System.out.println("You are good to go for regisration! \nPlease go to the next table for officiation!");
            }
        }
        else if(choice ==2)
        {
            System.out.println("Looks like you are having doubts and you may comeback again!");
        }
    }
}

// System.out.println("");