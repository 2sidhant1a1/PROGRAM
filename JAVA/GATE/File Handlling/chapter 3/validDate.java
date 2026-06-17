import java.util.regex.*;

public class validDate {
    public static void main(String[] args) {
        String phone = "23/12/2025";

        Pattern p = Pattern.compile("^\\d{2}/\\d{2}/\\d{4}$");
        Matcher m = p.matcher(phone);

        if(m.find())
        {
            System.out.println("Valid");
        }else{
            System.out.println("Invalid");
        }
        
    }
}