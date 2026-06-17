import java.util.LinkedList;
import java.util.Queue;

public class EmptyExample {
    public static void main(String[] args) {
        
        Queue<String> ApoinmentBoking = new LinkedList<>();
        ApoinmentBoking.offer("Sidhant");
        ApoinmentBoking.offer("Sunny");
        ApoinmentBoking.offer("vikash");
        ApoinmentBoking.offer("vijay");
        ApoinmentBoking.offer("vinod");
        ApoinmentBoking.offer("amit");
        ApoinmentBoking.offer("aditya");

    // isEmpty(): use to determine if the queue is empty.
        boolean Checking = ApoinmentBoking.isEmpty();
        
        if(!Checking)
        {
            System.out.println("patents are present. ");
        }
        else
        {
            System.out.println("patents are not present.");
        }

    }
}
