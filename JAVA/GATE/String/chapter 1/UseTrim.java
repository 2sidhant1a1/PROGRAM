public class UseTrim {
    public static void main(String[] args) {
        String str = "           Java   Programming        ";
        int n = str.length();
        System.out.println(str+", length = "+n);

        String Trim_str = str.trim();
        int m = Trim_str.length();

        System.out.println(Trim_str+", length = "+m);
    }
    
}
