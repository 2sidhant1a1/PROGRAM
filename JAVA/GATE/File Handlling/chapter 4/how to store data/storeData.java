import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class storeData {
    public static void main(String[] args) throws IOException {
        BufferedWriter pw = new BufferedWriter(new FileWriter("simple.text"));

        for(int i=1; i<= 10000; i++)
        {
            pw.write("Line "+i);
            pw.newLine();
        }

        pw.close();
    }
}
