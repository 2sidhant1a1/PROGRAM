/*
 *  Problem Statement: From a HashSet of strings, retain only the strings 
                        that start with "A" and print the resulting set.
 
 */

import java.util.*;

public class problem2{
    
    public static void main(String[] args)
    {
        HashSet<String> names = new HashSet<>();
        names.add("Aditya");
        names.add("Karanjeet");
        names.add("Amaan");
        names.add("Himanshi");
        names.add("Divyansh");
        names.add("Bikash");
        
        System.out.println(names);

        Iterator<String> it = names.iterator();

        while(it.hasNext())
        {
            String s = it.next();

            if(!s.startsWith("A"))
            {
                it.remove();
            }
        }
        System.out.println(names);

    }
}