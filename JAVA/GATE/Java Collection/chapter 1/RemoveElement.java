import java.util.ArrayList;

public class RemoveElement {
    public static void main(String[] args) {
        
        ArrayList<Character> fruits = new ArrayList<>();

        fruits.add('A');
        fruits.add('B');
        fruits.add('C');
        fruits.add('D');
        fruits.add('E');
        fruits.add('F');

        //Remove element of the index 3 from ArrayList
        fruits.remove(3);

        System.out.println("After Removing:-");
        for(int fruit: fruits)
        {
            System.out.println(fruit);
        }
        
    }
}
