import java.util.regex.*;

public class Only_Alpha {
    public static void main(String[] args)
    {
        String s = "Sidhant";

        Pattern p = Pattern.compile("^[A-Za-z]+$");

        Matcher m = p.matcher(s);

        boolean ISAlphaOnly = m.matches();

        System.out.println(ISAlphaOnly);
    }
}
