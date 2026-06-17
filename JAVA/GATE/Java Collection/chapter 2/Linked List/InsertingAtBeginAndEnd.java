import java.util.LinkedList;

public class InsertingAtBeginAndEnd {
    public static void main(String[] args) {

        LinkedList<Integer> num = new LinkedList<>();
        num.add(1);
        num.add(2);
        num.add(3);
        num.add(4);
        num.add(5);
        num.add(6);

    //   Insert Element At Begining 
        num.addFirst(56);

    //   Insert Element At End
        num.addLast(98);

    //   Print All The Element Of The Linked List
        System.out.println("Names: "+ num);
    }
}
