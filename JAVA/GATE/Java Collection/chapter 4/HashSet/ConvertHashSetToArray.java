import java.util.HashSet;
import java.util.Arrays;

public class ConvertHashSetToArray {
    public static void main(String[] args)
    {
        HashSet<Integer> number = new HashSet<>();
        number.add(10);
        number.add(20);
        number.add(30);
        number.add(40);
        number.add(50);
        number.add(10);// duplicate
        number.add(60);

        Object[] numberArray = number.toArray();
    //  Print HashSet element
        System.out.println("Array: " + Arrays.toString(numberArray));
    }
    
}
