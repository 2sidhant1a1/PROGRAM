import java.util.regex.*;

public class ExtractTime
{
    public static void main(String[] args) {
        String ip = "You are invited to the celebration that starts at 04:53:00 which is in Mumbai";

        Pattern p = Pattern.compile("[ ]{1}\\d{2}:\\d{2}:\\d{2}[ ]{1}");

        Matcher m = p.matcher(ip);

        while(m.find())
        {
            System.out.println("Extracted Time: "+ m.group());
        }
    }

}