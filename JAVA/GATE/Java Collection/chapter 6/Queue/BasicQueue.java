import java.util.Queue;
import java.util.LinkedList;

public class BasicQueue
{
    public static void main(String[] args)
    {
    //  creating Variable name of Queue.
        Queue<Integer> num = new LinkedList<>();

    //  offer(element): Use to add element in queue but it give FALSE when insertion is not done.
        num.offer(1);
        num.offer(2);
        num.offer(3);
        num.offer(4);
        num.offer(4);
        num.offer(6);
        System.out.println(num);

    //  Use to add element in queue but it gives ERRORE when insertion in not done.
        num.add(7);
        num.add(8);
        num.add(9);
        System.out.println(num);

    }
}