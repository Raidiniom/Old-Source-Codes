import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class IOStream {
    public static void main(String[] args) {

        String[] weed = {"Read", "This asddsfjigabnfsdlgjahnsfdgfg", "qweashjidfgbasjdfn"};

        try {
            BufferedWriter data = new BufferedWriter(new FileWriter("OutputText.txt"));
            for(String weeds : weed){
                data.write("\n" +weeds);
            }

            data.close();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        try {
            BufferedReader dataread = new BufferedReader(new FileReader("OutputText.txt"));
            String eachLine;
            while((eachLine = dataread.readLine()) != null){
                System.out.println(eachLine);
            }
            dataread.close();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
