import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class store1000Line {
    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter(new FileWriter("big.text"));

        for(int i=1; i<= 10000; i++)
        {
            pw.write("Line "+i+"\t");
        }

        pw.close();
    }
}
