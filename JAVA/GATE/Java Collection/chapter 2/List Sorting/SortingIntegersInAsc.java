import java.util.ArrayList;
import java.util.Collections;

public class SortingIntegersInAsc {
    public static void main(String[] args)
    {
        ArrayList<Integer> num = new ArrayList<>();
        num.add(23);
        num.add(32);
        num.add(21);
        num.add(38);
        num.add(20);
        num.add(29);
        num.add(31);

        Collections.sort(num);
        System.out.println("Sorting Ascending: "+num);
        
    }
    
}
