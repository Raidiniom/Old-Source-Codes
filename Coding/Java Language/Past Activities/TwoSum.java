import java.util.*;

class TwoSum
{
    public static void main(String args[])
    {
        int[] NumList = new int[6]; 
        int Target = 10;

        Scanner input = new Scanner(System.in);

        System.out.print("Enter the numbers you want: \n");
        for(int x = 0; x<NumList.length; x++)
        {
            NumList[x] = input.nextInt();
        }

        System.out.print("Numbers you have entered: \n" +Arrays.toString(NumList));

        for(int AddendL = 0; AddendL<NumList.length; AddendL++)
        {
            for(int AddendR = AddendL + 1; AddendR<NumList.length; AddendR++)
            {
                if(NumList[AddendL] + NumList[AddendR] == Target)
                {
                    System.out.print("\n Pair numbers are "+NumList[AddendL]+" & "+NumList[AddendR]);
                }
            }
        }
    }
}

// System.out.print(" ");