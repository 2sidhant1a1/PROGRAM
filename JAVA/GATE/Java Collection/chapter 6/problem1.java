/*
* Problem statemnt: Enqueue several elements in a Queue and then 
                    dequeue them on by one, printing each.

*/
import java.util.*;

public class problem1 {
    public static void main(String[] args)
    {
        Queue<Integer> studentPass = new LinkedList<>();
        studentPass.offer(12);
        studentPass.offer(21);
        studentPass.offer(31);
        studentPass.offer(14);
        studentPass.offer(25);
        studentPass.offer(36);

        while(!studentPass.isEmpty())
        {
            System.out.println(studentPass.poll());
        }

    }
}
