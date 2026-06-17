import java.util.*;

public class retainAll {
    public static void main(String[] args)
    {
        HashSet<Integer> GreadeA = new HashSet<>();
        GreadeA.add(12);
        GreadeA.add(13);
        GreadeA.add(22);
        GreadeA.add(32);
        GreadeA.add(25);

        HashSet<Integer> International = new HashSet<>();
        International.add(13);
        International.add(32);
        International.add(1);
        International.add(21);
        International.add(11);


        HashSet<Integer> GradeA_and_International = new HashSet<>(GreadeA);

    //  HashSet1.retainAll(HashSet2):- Use to store common element form HashSet1
        GradeA_and_International.retainAll(International);

        System.out.println("grade A in Math Student Roll:- \t\t"+GreadeA);
        System.out.println("International Conference Student Roll:-\t"+International);
        System.out.println("Common in both:- \t\t\t"+GradeA_and_International);
        
    }
}
