import java.util.LinkedList;

public class IteratingLinkedList {
    public static void main(String[] args) {
        LinkedList<String> weekdays = new LinkedList<>();
        weekdays.add("Monday");
        weekdays.add("Tuesday");
        weekdays.add("Wednesday");
        weekdays.add("Thursday");
        weekdays.add("Friday");

        for(String days: weekdays)
        {
            System.out.println(days);
        }
    }
    
}
