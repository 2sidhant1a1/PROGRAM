// neccesary for HashMap
import java.util.HashMap;

public class BasicHashMap {
    public static void main(String[] args)
    {
    //  Create HashMap
        HashMap<String,String> capitals = new HashMap<>();
    //  Adding Element from HashMap 
        capitals.put("USA","Paris");
        capitals.put("France","Tokyo");
        capitals.put("Japan","Berlin");
        capitals.put("Germany", "Berlin");
        capitals.put("India","New Delhi");
        capitals.put("Brazil","Brasulia");
    
    //  Printing All Element From The HashMap
        System.out.println("Country Capitals: " + capitals);
    
    }
}