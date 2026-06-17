import java.util.HashSet;

public class addAll {
        public static void main(String[] args)
    {
        HashSet<Integer> set1 = new HashSet<>();
        set1.add(12);
        set1.add(13);
        set1.add(22);
        set1.add(32);
        set1.add(25);


        HashSet<Integer> set2 = new HashSet<>();
        set2.add(13);
        set2.add(32);
        set2.add(1);
        set2.add(21);
        set2.add(11);

        
        HashSet<Integer> set3 = new HashSet<>(set1);

    //  HashSet.addAll(HashSet2):- Use to add all element from HashSet2 to Hashset1
        set3.addAll(set2);

        System.out.println("Set 1:-\t"+set1);
        System.out.println("Set 2:-\t"+set2);
        System.out.println("All Element:-\t"+set3);
        
    }
}
