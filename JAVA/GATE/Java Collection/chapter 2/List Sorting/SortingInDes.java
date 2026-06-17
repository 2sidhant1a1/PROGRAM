import java.util.ArrayList;
import java.util.Collections;

// Use for sorting from desending order
import java.util.Comparator;

public class SortingInDes {
    public static void main(String[] args) {
        ArrayList<Integer> num = new ArrayList<>();
        num.add(23);
        num.add(32);
        num.add(21);
        num.add(38);
        num.add(20);
        num.add(29);
        num.add(31);

        Collections.sort(num, new Comparator<Integer>()
        {
            public int compare(Integer a, Integer b)
            {
                return b-a;
            }
        });
        System.out.println("Sorted Descending: "+num);
    }
}
