import java.util.*;
import java.io.*;

public class ArrayListplaytest {
    public static void main(String[] args) {
        ArrayList<String> yeah = new ArrayList<String>();

        yeah.add("Alpha");
        yeah.add("Bravo");
        yeah.add("Charlie");
        yeah.add("Delta");
        yeah.add("Echo");
        yeah.add("Foxtrot");

        try {
            BufferedWriter createthelist = new BufferedWriter(new FileWriter("C:\\Users\\Raidi\\Documents\\JavaCode\\NATOAlphabets.txt"));

            for(int i = 0; i < yeah.size(); i++){
                createthelist.write("\n"+yeah.get(i));
            }
            createthelist.close();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}

