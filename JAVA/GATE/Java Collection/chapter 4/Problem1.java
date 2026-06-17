import java.util.*;

public class Problem1 {
    public static void main(String[] args)
    {
        ArrayList<Integer> number = new ArrayList<>();
        number.add(10);
        number.add(20);
        number.add(30);
        number.add(40);
        number.add(50);
        number.add(10);// duplicate
        number.add(40);
        System.out.println("ArrayList: " + number);

    //  Shortest part use to convert from ArrayList to HashSet for remove duplicate.
        HashSet<Integer> numHashSet = new HashSet<>(number);

        System.out.println("HashSet: " + numHashSet);
    }
}
