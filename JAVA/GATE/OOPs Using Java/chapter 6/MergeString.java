import java.util.ArrayList;

public class MergeString {
    public  static void main(String[] args)
    {
        ArrayList<String> s1 = new ArrayList<>();
        s1.add("sidhant");
        s1.add("sumit");
        s1.add("sandeep");
        s1.add("sunny");
        s1.add("sukumar");

        ArrayList<String> s2 = new ArrayList<>();
        s2.add("Amit");
        s2.add("Aditya");
        s2.add("Ayush");
        s2.add("Abishek");
        s2.add("Abhay");

        for(String s: s2) // we also use s2.addAll(s1)
        {
            s1.add(s);
        }

        System.out.println(s1);

    }
    
}
