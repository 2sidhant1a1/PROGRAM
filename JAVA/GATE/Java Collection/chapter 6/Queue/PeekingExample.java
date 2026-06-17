import java.util.LinkedList;
import java.util.Queue;

public class PeekingExample {
    public static void main(String[] args)
    {
    
        Queue<String> ApoinmentBoking = new LinkedList<>();
        ApoinmentBoking.offer("Sidhant");
        ApoinmentBoking.offer("Sunny");
        ApoinmentBoking.offer("vikash");
        ApoinmentBoking.offer("vijay");
        ApoinmentBoking.offer("vinod");
        ApoinmentBoking.offer("amit");
        ApoinmentBoking.offer("aditya");

    //  .peek(): use to peeking front element from queue
        String apoinment = ApoinmentBoking.peek();
        
        System.out.println("first persion: " + apoinment);
    }
}
