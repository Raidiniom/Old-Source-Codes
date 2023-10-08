import java.util.Scanner;
// MidtermExam - Customer Information
class MidtermExamCusIn 
{
    private static String CustomerName;
    private static int CustomerAge;

    public String getName()
    {
        return this.CustomerName;
    }
    public void setName(String CustomerName)
    {
        this.CustomerName = CustomerName;
    }
    
    public int getAge()
    {
        return this.CustomerAge;
    }
    public void setAge(int CustomerAge)
    {
        this.CustomerAge = CustomerAge;
    }

    public void AskInfo()
    {
        Scanner input = new Scanner(System.in);

        System.out.print("\nEnter Name: ");
        CustomerName = input.nextLine();
        System.out.print("Enter Age: ");
        CustomerAge = input.nextInt();
    }
}

// System.out.print(" ");