import java.util.regex.*;

public class CaplitalWordsFinder {
    public static void main(String[] args) {
        String input = "Today is a Beautiful Day";

        Pattern p = Pattern.compile("\\b[A-Z][a-z]*\\b"); // Corrected regex pattern
        Matcher m = p.matcher(input);

        while(m.find()) {
            System.out.println("Capitalized Word: "+ m.group());
        } 
    }
}

