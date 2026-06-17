import java.util.regex.*;

public class separateNameAge {
    public static void main(String[] args) {
        String Detail = "Jonhn Doe(30)";

        Pattern p = Pattern.compile("[A-Za-z ]+");
        Pattern p1 = Pattern.compile("\\d+");

        Matcher m = p.matcher(Detail);
        Matcher m1 = p1.matcher(Detail);

        if(m.find())
        {
            System.out.println(m.group());
        }
        if(m1.find())
        {
            System.out.println((m1.group()));
        }
    }
}
