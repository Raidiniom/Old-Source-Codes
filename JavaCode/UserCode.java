import java.util.ArrayList;
import java.util.Scanner;

public class UserCode {
    public static void main(String[] args) {
        Scanner UserInput = new Scanner(System.in);

        ArrayList<String> JustWords = new ArrayList<String>();

        for (int x = 0; x < 10; x++) 
        {
            System.out.println("Enter Random Words: ");
            String Words = UserInput.nextLine();
            JustWords.add(Words);
        }

        System.out.println(JustWords);
        System.out.println(JustWords.size());
    }
}
