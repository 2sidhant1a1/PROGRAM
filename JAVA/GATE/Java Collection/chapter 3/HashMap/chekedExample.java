import java.util.HashMap;

public class chekedExample {
    public static void main(String[] args) {
         HashMap<Integer, String> days = new HashMap<>();
        days.put(1,"Sunday");
        days.put(2,"Monday");
        days.put(3,"Tuesday");
        days.put(4,"Wednesday");
        days.put(5,"Thuresday");
        days.put(6,"Frd");
        days.put(7,"Saturday");

    //  containsKey(Key) :- Use to checked the key is present or not
        System.out.println("8 day are present = "+ days.containsKey(8));

    //  containsValue(value) :- USe to checked the value is present or not
        System.out.println("Monday is present = " + days.containsValue("Monday"));

    }
    
}
