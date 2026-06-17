import java.util.regex.*;

public class Vowel_Only
{
    public static void main(String[] args) {
        
        String ip = "SidhantKumar";

        String vowels = "[AEIOUaeiou]";

        Pattern p = Pattern.compile(vowels);
        Matcher m = p.matcher(ip);
        while(m.find())
        {
            System.out.println(m.group());
        }

    }
}