// MidtermExam - Invoice
class MidtermExamIN 
{
    float Discount(float age, float TotalCost, float TextConstant)
    {
        if(age >= 60)
        {
            return TotalCost = age * 0.2f ;
        }
        else
        {
            return TotalCost = age * 5;
        }
    }

    public void Invoice()
    {
        MidtermExamCusIn presentCusIn = new MidtermExamCusIn();

        String Name = presentCusIn.getName();
        float Age = presentCusIn.getAge();
        float TextConstant = 50;
        float TotalCost = Discount(Age, Age, TextConstant);

        System.out.print("\n\n--------------------");
        System.out.print("\nCustomer: " +Name);
        System.out.print("\nAge: " +Age);
        System.out.print("\nTotal Cost: " +TotalCost);
        System.out.print("\n--------------------");
    }
}

// System.out.print(" ");