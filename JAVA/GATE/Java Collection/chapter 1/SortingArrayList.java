import java.util.ArrayList;
import java.util.Arrays;
// Use for sorting
import java.util.Collections;

public class SortingArrayList {
    public static void main(String[] args) {
        Integer[] num = {12,34,2,443,64,23};

        ArrayList<Integer> numList = new ArrayList<>(Arrays.asList(num));

        //Sorting element of ArrayList
        Collections.sort(numList);

        System.out.println("Sorted List: " + numList);
    }
    
}
