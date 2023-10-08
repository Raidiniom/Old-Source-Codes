import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class ReadFile {
    public static void main(String[] args) {
        String usernamefile = "";
        String passwordfile = "";
        int linefile;

        Scanner userinput = new Scanner(System.in);

        System.out.print("\nEnter Username: ");
        String usernamelog = userinput.nextLine();
        System.out.print("Enter Password: ");
        String passwordlog = userinput.nextLine();

        try {
            BufferedReader readthefile = new BufferedReader(new FileReader(""+usernamelog+".txt"));
            for(linefile = 1; linefile < 5; linefile++){
                if (linefile == 1) {
                    try {
                        usernamefile = readthefile.readLine();
                    } catch (IOException e) {
                        // TODO Auto-generated catch block
                        e.printStackTrace();
                    }
                } 
                if (linefile == 2) {
                    try {
                        passwordfile = readthefile.readLine();
                    } catch (IOException e) {
                        // TODO Auto-generated catch block
                        e.printStackTrace();
                    }
                }
            }
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        if (usernamelog.equals(usernamefile) && passwordlog.equals(passwordfile)) {
            System.out.print("\nSuccessfully Logged In!");
        } 
        else if(!usernamelog.equals(usernamefile) || !passwordlog.equals(passwordfile)){
            System.out.print("\nWrong Username or Password!");
        }
        else {
            System.out.print("\n??HUH??");
        }

    }
}
