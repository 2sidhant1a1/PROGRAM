import java.util.regex.*;

public class Digital_Only_String {
    public static void main(String[] args)
    {
        String s = "2025";

        String OnlyDigit = "^\\d+$";

        Pattern p = Pattern.compile(OnlyDigit);

        Matcher m = p.matcher(s);
        
        boolean isDigitOnly = m.matches();

        System.out.println(isDigitOnly);
    }
}
