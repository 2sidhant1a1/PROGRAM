import java.util.*;

public class SortingString {
    public static void main(String[] args)
    {
        ArrayList<String> names = new ArrayList<>();
        names.add("Sidhant");
        names.add("Vivek");
        names.add("Aditiya");
        names.add("Arjun");
        names.add("amit");
        names.add("Sunny");
        names.add("Sidhant");
        names.add("suresh");

        Collections.sort(names);
        System.out.println("Alphabetically Sorting: "+names);
    }
}
