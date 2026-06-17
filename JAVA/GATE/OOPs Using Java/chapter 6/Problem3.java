import java.util.*;

public class Problem3 {
    public  static void main(String[] args)
    {
        ArrayList<Integer> s1 = new ArrayList<>();
        s1.add(23);
        s1.add(2);
        s1.add(43);
        s1.add(2);
        s1.add(67);
        s1.add(23);

        HashSet<Integer> s = new HashSet<>();

        int ans = -1;
        for(int elem: s1)
        {
            if(s.contains(elem))
            {
                ans = elem;
                break;
            }
            s.add(elem);
        }
        System.out.println(s1);
        System.out.println(ans);
    }
}
     