import java.util.regex.*;

public class Alpha_Digital_Underscore
{
    public static void main(String[] args) {
        
        String ip = "Sidhant_1a1_Kumar";

        Pattern p = Pattern.compile("^[A-Za-z1-9_]+$");

        boolean isTrue = p.matcher(ip).matches();

        System.out.println(isTrue);
    }
}