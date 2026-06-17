import java.util.ArrayList;

public class CheckingElement {
    public static void main(String[] args)
    {
        ArrayList<String> name = new ArrayList<>();
        name.add("Sidhant");
        name.add("Sonu");
        name.add("Bob");
        name.add("Sunny");
        name.add("Sukumar");
        name.add("vikash");
        name.add("vivek");

        boolean Contain = name.contains("bob");//Checking

        System.out.println("Contains 'Bob'?" + Contain );
        
        
    }
}