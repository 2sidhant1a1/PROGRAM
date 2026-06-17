import java.util.LinkedList;

public class getAndSet {
    public static void main(String[] args)
    {
        LinkedList<Character> letters = new LinkedList<>();
        letters.add('A');
        letters.add('B');
        letters.add('C');
        letters.add('D');
        letters.add('E');
        letters.add('F');

    //   Retrieve the First Element
        char firstElem = letters.getFirst();
        System.out.println("First Element of Linked List: "+firstElem);

    //   Retrieve the Last Element
        char lastElem = letters.getLast();
        System.out.println("Last Element of Linked List: "+lastElem);
         
    //   Updating the First Element
        letters.set(0,'G');
        System.out.println("All Element Of Linked List After Updating: "+letters);

    }
}
