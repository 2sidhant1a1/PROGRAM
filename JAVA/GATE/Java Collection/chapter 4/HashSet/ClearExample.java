import java.util.HashSet;

public class ClearExample {
    public static void main(String[] args)
    {
        HashSet<Integer> Roll = new HashSet<>();
        Roll.add(10);
        Roll.add(27);
        Roll.add(13);
        Roll.add(43);
        Roll.add(15);
        Roll.add(10);// duplicate
        Roll.add(16);
        System.out.println("Student Roll: " + Roll);

    //   clear():- USe to Removing all element from HashSet.
        Roll.clear();
        
        System.out.println("After Passing all student: " + Roll);
    }
}
