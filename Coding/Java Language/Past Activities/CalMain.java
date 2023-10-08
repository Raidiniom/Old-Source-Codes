import java.util.*;

class CalMain {
    public static void main(String args[])
    {
        CalChild process = new CalChild();

        float Cal1Num;
        float Cal2Num;

        Scanner input = new Scanner(System.in);
        
        System.out.print("=== Calculator === \n");
        System.out.print("Enter a number: ");
        Cal1Num = input.nextFloat();
        System.out.print("Enter a number: ");
        Cal2Num = input.nextFloat();

        process.setIntOne(Cal1Num);
        process.setIntTwo(Cal2Num);

        process.display();
    }
}

// System.out.print(" ");