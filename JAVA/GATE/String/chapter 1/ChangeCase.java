public class ChangeCase {
    public static void main(String[] args) {
        String str1 = "A b_c&d";
        String str2 = "A B_C&D";

        System.out.println(str1.equalsIgnoreCase(str2));
    }
}
