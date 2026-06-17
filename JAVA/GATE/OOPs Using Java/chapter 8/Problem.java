import java.util.*;
public class Problem
{
    public static void main(String[] args) {
        HashMap<Integer,Integer> hm = new HashMap<>();
        int[] arr = {1,2,2,1,1,3};

        for(int elem: arr)
        {
            hm.put(elem, hm.getOrDefault(elem,0) + 1);
        }

        HashSet<Integer> hs = new HashSet<>();

        for(int val: hm.values())
        {
            hs.add(val);
        }
        
        System.out.print("Occurrences are " + hm);

         if(hs.size() == hm.size())
            System.out.println(". Yes, It is unique.");
        else
            System.out.println(". No, It is not unique.");


    }
}