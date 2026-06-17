import java.util.regex.*;

public class MobileNumber {
    public static void main(String[] args) {
        String phone = "8863090260";

        Pattern p = Pattern.compile("\\d{10}");
        Matcher m = p.matcher(phone);

        if (m.matches()) {
            System.out.println("Valid Mobile Number.");
        } else {
            System.out.println("Invalid Mobile Number.");
        }
    }
}