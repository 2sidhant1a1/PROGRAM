import java.util.regex.*;

public class CheckJavaAppears {
    public static void main(String[] args) {
        String pi = "Sidhan java";

        Pattern p = Pattern.compile("\\bjava\\b");
        Matcher m = p.matcher(pi);
        
        while(m.find())
        {
            System.out.println(m.group(0));
        }

    }
}
