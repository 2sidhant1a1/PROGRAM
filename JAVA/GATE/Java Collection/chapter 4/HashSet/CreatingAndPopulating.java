// improt for working HashSet
import java.util.HashSet;

public class CreatingAndPopulating
{
    public static void main(String[] args)
    {
    //   Create HashSet Variable Name
        HashSet<Integer> number = new HashSet<>();

    //   Add element From Hashset

        number.add(10);
        number.add(20);
        number.add(30);
        number.add(40);
        number.add(50);
        number.add(10);// duplicate
        number.add(60);

    //  Print HashSet element
        System.out.println("HashSet: " + number);
    }
}