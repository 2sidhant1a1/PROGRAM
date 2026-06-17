import java.util.ArrayList;
//using for List
import java.util.List;

public class ExtractingSublistInArrayList {
    public static void main(String[] args) {
        ArrayList<String> fruits = new ArrayList<>();
        
        fruits.add("orange");
        fruits.add("Mango");
        fruits.add("Banana");
        fruits.add("Apple");
        fruits.add("Grap");
        fruits.add("Honeydew");

        //Extract subList from ArrayList
        List<String> SubList = fruits.subList(1,4);

        System.out.println("SubList OF ArrayList: "+ SubList);
    }
}
