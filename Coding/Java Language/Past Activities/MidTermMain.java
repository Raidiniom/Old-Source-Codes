import java.util.*;
// Machine Problem #1 - MidTerm
class MidTermMain {
    public static void main(String args[]){
        MidTermChild present = new MidTermChild();

        int Val1;
        int Val2;

        Scanner input = new Scanner(System.in);

        System.out.print("Number of Lecture units: ");
        Val1 = input.nextInt();
        System.out.print("Number of Laboratory units: ");
        Val2 = input.nextInt();

        present.setLec(Val1);
        present.setLab(Val2);

        present.display();
    }
}

// System.out.print(" ");

/*
        System.out.print("----------------");
        System.out.print("\nFees: ");
        System.out.print("\n   Tuition:       " +present.getTT());
        System.out.print("\n   Laboratory:    " +present.getTL());
        System.out.print("\n   Registration:  " +present.getRegis());
        System.out.print("\n   Miscellaneous: " +present.getMisc());
        System.out.print("\n   Total Payables:" +present.getFee());
        System.out.print("\nPayables per Exam: " +present.getpE());
 */
