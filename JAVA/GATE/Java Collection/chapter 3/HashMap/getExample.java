import java.util.HashMap;

public class getExample {
    public static void main(String[] args)
    {
        HashMap<String, String> capitals = new HashMap<>();
        capitals.put("USA","Paris");
        capitals.put("France","Tokyo");
        capitals.put("Japan","Berlin");
        capitals.put("Germany", "Berlin");
        capitals.put("India","New Delhi");
        capitals.put("Brazil","Brasulia");

    //  get(Key):- Use to extract value of Specific Key.
        String FranceCapital = capitals.get("France");

        System.out.println(" Capitals Of France: " + FranceCapital);
    
    }
}
