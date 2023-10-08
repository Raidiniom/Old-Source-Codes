import java.util.*;

class Calculator
{
    public static void main(String[]args)
    {
        float num1;
        float num2;
        float ans;
        int nodecimalans;
        int operator;
       
        Scanner input = new Scanner(System.in);
       
        System.out.println("enter 1st number:");
        num1 = input.nextFloat();
        System.out.println("enter 2nd number:");
        num2 = input.nextFloat();
       
        System.out.println("Choice a Math Operation:");
        System.out.println("1 - add \n2 - subtract \n3 - multply \n4 - divide \n5 - modulo");
       
        operator = input.nextInt();
        if(operator ==1)
        {
            ans = num1 + num2;
            nodecimalans = (int) ans;
            System.out.println("The answer is "+nodecimalans);
        }
        else if(operator ==2)
        {
            if(num1<num2)
            {
                System.out.println("Hey User! try again we can not do negative values here!");
            }
            else if(num2<num1)
            {
                ans = num1 - num2;
                System.out.println("The answer is "+ans);
            }
        }
        else if(operator ==3)
        {
            ans = num1 * num2;
            System.out.println("The answer is "+ans);
        }
        else if(operator ==4)
        {
            ans = num1 / num2;
            System.out.println("The answer is "+ans);
        }
        else if(operator ==4)
        {
            ans = num1 / num2;
            System.out.println("The answer is "+ans);
        }
        else if(operator ==5)
        {
            if(num2 > num1)
            {
                System.out.println("The 1st number must not be lesser than the 2nd number!");
            }
            else
            {
                ans = num1 % num2;
                nodecimalans = (int) ans;
                System.out.println("The answer is "+nodecimalans);
            }
        }
        else
        {
            System.out.println("I hoped that you would pick those 5!");
        }
    }
}