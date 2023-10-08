import java.util.*;

public class SeatWorkMain
{
    public static void main(String[]args)
    {
        // History101
        Hist101 history = new Hist101();
        history.edpCodeH = 70000;
        history.courseTitleH = "Filipino History";
        
        // English101
        Eng101 english = new Eng101();
        english.setpriEDP(69823);
        english.courseTitleE = "Purposive Communication";
        
        // ComputerProgramming102
        ComProg102 computer = new ComProg102();
        computer.setpriEDP(69916);
        computer.setpriCT("Java Programming");

        // Mathematics101
        Math101 math = new Math101();
        math.edpCodeM = 12345;
        math.setpriM("Very Advance Mathematics");
        
        // Display all childs
        history.display();
        //
        System.out.print("\nEDP code: "+english.getpriEDP());
        english.display();
        //
        System.out.print("\nEDP code: "+computer.getpriEDP());
        System.out.print("\nCourse Title: "+computer.getpriCT());
        //
        math.display();
        System.out.print("\nCourse Title: "+math.getpriM());

    }
}

// System.out.print("\n ");