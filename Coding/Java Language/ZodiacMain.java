import java.util.Scanner;

class ZodiacMain {
    public static void main(String args[]){
        ZodiacChild profile = new ZodiacChild();
        
        String Valname;
        String ValMonth;
        int ValDay;
        int ValYear;

        Scanner input = new Scanner(System.in);

        System.out.print("Name: ");
        Valname = input.nextLine();
        System.out.print("Date of Birth: ");
        System.out.print("\nMonth- ");
        ValMonth = input.nextLine();
        System.out.print("Day- ");
        ValDay = input.nextInt();
        System.out.print("Year- ");
        ValYear = input.nextInt();

        profile.setName(Valname);
        profile.setMonth(ValMonth);
        profile.setDay(ValDay);
        profile.setYear(ValYear);

        System.out.print("----------------");
        System.out.print("\nResults: ");
        System.out.print("\n Name: " +profile.getName());
        System.out.print("\n Age:  " +profile.getAge());
        profile.zodSign();
    }
}

// System.out.print(" ");