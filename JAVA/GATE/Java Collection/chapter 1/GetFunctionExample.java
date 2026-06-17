import java.util.ArrayList;
public class GetFunctionExample{
    public static void main(String[] args)
    {
        ArrayList<String> fruits = new ArrayList<>();
        
        fruits.add("orange");
        fruits.add("Mango");
        fruits.add("Banana");
        fruits.add("Apple");
        fruits.add("Grap");
        fruits.add("Honeydew");
        

        
        //get() is use to print specific index of the element from ArrayList.
        System.out.println("\nPRINT THE ELEMENT AT INDEX 2: "+(fruits.get(2)));

        
    }
}
