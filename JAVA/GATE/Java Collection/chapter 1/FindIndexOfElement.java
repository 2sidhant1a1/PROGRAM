import java.util.ArrayList;
import java.util.Arrays;

public class FindIndexOfElement {
    public static void main(String[] args) {
        Integer[] num = {12,34,2,443,64,23};

        // Convert Array to ArrayList 
        ArrayList<Integer> numList = new ArrayList<>(Arrays.asList(num));

        int index = numList.indexOf(443);

        System.out.println("Index of 443: " + index);
    }
}
