import java.util.HashSet;

public class CheckedPresentOrNot {
    public static void main(String[] args) {
        HashSet<String> country = new HashSet<>();

        country.add("India");
        country.add("Russia");
        country.add("Bangladesh");
        country.add("China");
        country.add("USA");
        country.add("Afghanistan");

    //   Contins(Element):- USe to Check Member is present or not.
        boolean isPresent = country.contains("Pakistan");

        if (isPresent) {
            System.out.println("Yes, Pakistan country is present in this world.");
        } else {
            System.out.println("No, Pakistan country is not present in this world.");
        }
    }
}