import java.util.*;

class CalChild {
    private float Integer1;
    private float Integer2;
    private float Sum;
    private float Difference;
    private float Product;
    private float Quotient;

    //Input Numbers
    public float getIntOne()
    {
        return this.Integer1;
    }
    public void setIntOne(float Integer1)
    {
        this.Integer1 = Integer1;
    }

    public float getIntTwo()
    {
        return this.Integer2;
    }
    public void setIntTwo(float Integer2)
    {
        this.Integer2 = Integer2;
    }

    //Operations
    public void display()
    {
        Sum = Integer1 + Integer2;
        Difference = Integer1 - Integer2;
        Product = Integer1 * Integer2;
        Quotient = Integer1 / Integer2;

        System.out.print("\nSum: " +Sum);
        System.out.print("\nDifference: " +Difference);
        System.out.print("\nProduct: " +Product);
        System.out.print("\nQuotient: " +Quotient);
    }
}

// System.out.print(" ");