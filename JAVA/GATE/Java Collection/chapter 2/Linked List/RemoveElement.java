import java.util.LinkedList;

public class RemoveElement {
    public static void main(String[] args)
    {
        LinkedList<String> names = new LinkedList<>();
        names.add("Alice");
        names.add("Bob");
        names.add("Charlie");
        names.add("Sidhant");
        names.add("Vivek");

    //   Remove the First Element At Linked List
        String FirstElem=names.removeFirst();
        System.out.println("List Ater Removing "+FirstElem+" from Linked List: "+names);

    //  Remove the Last Element At Linked List
        String LastElem = names.removeLast();
        System.out.println("List Ater Removing "+LastElem+" from Linked List: "+names);
    }
    
}
