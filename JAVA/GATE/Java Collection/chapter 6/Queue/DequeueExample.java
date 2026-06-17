import java.util.LinkedList;
import java.util.Queue;

public class DequeueExample {
    public static void main(String[] args)
    {
        Queue<Integer> num = new LinkedList<>();
        num.offer(1);
        num.offer(2);
        num.offer(3);
        num.offer(4);
        num.offer(5);
        num.offer(6);

    //  poll(): Use to remove and return the front element.
        int elem = num.poll();
        System.out.println("Remove element = " + elem);

        System.out.println("Remaning Element = " + num);

    }
}
