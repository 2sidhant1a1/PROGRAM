import java.util.*;


public class problem4{
    public  static void main(String[] args)
    {
        ArrayList<Integer> s1 = new ArrayList<>();
        s1.add(23);
        s1.add(2);
        s1.add(43);
        s1.add(54);
        s1.add(67);
        s1.add(2);

        HashSet<Integer> i = new HashSet<>(s1);
        System.out.println(i);

        
    }
    
}
