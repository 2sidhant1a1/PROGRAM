import java.util.HashMap;

public class PutExample {
    public static void main(String[] args)
    {
         HashMap<Integer, String> days = new HashMap<>();
        days.put(1,"Sunday");
        days.put(2,"Monday");
        days.put(3,"Tuesday");
        days.put(4,"Wednesday");
        days.put(5,"Thuresday");
        days.put(6,"Frd");
        days.put(7,"Saturday");
    
    //  put(key, value) :- Use to update value.
        days.put(6,"Friday");

        System.out.println("Country Capitals: " + days);    
    }
}