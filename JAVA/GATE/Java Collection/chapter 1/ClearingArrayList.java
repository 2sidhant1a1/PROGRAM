import java.util.ArrayList;

public class ClearingArrayList {
    public static void main(String[] args) {
        ArrayList<String> fruits = new ArrayList<>();
        
        fruits.add("orange");
        fruits.add("Mango");
        fruits.add("Banana");
        fruits.add("Apple");
        fruits.add("Grap");
        fruits.add("Honeydew");

        //Clear all element from the ArrayList
        fruits.clear();
        
        System.out.println("Elemnet of ArrayList: " + fruits);
    }
    
}
