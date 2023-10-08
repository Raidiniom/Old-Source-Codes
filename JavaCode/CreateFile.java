import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class CreateFile {
    public static void main(String[] args) {
        Scanner userinput = new Scanner(System.in);

        System.out.print("Enter Username: ");
        String username = userinput.nextLine();
        System.out.print("Enter Password: ");
        String password = userinput.nextLine();

        try {
            BufferedWriter createdata = new BufferedWriter(new FileWriter(""+username+".txt"));
            createdata.write(""+username);
            createdata.write("\n"+password);
            createdata.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.print("Profile Created");
    }
}
