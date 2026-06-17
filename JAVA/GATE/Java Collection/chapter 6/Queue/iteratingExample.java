import java.util.LinkedList;
import java.util.Queue;

public class iteratingExample {
    public static void main(String[] args)
    {
        Queue<Integer> studentPass = new LinkedList<>();
        studentPass.offer(12);
        studentPass.offer(21);
        studentPass.offer(31);
        studentPass.offer(14);
        studentPass.offer(25);
        studentPass.offer(36);

        for(int pass: studentPass)
        {
            System.out.println("Pass student Roll: " + pass);
        }

    }
}
