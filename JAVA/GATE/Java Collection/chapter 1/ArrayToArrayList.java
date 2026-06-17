import java.util.ArrayList;
// USe for converting Arrays to ArrayList
import java.util.Arrays;

public class ArrayToArrayList {
    public static void main(String[] args) {
        Integer[] num = {12,34,2,443,64,23};

        // Convert Array to ArrayList 
        ArrayList<Integer> numList = new ArrayList<>(Arrays.asList(num));

        System.out.println("Concerted ArrayList: " + numList);
    }
    
}
