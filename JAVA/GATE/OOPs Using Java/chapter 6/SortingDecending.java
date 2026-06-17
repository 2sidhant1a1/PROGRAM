import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator; 


public class SortingDecending {
    public  static void main(String[] args)
    {
        ArrayList<Integer> s1 = new ArrayList<>();
        s1.add(23);
        s1.add(2);
        s1.add(43);
        s1.add(54);
        s1.add(67);

        Collections.sort(s1 , new Comparator<Integer>(){
                    public int compare(Integer a, Integer b)
                    {
                        return b-a;
                    }
        });

        System.out.println(s1);

    }
    
}
