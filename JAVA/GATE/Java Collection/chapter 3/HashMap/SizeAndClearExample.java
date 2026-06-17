import java.util.HashMap;

public class SizeAndClearExample {
    public static void main(String[] args) {
        HashMap<Integer, String> StudentRoll = new HashMap<>();
        StudentRoll.put(23,"Rohit");
        StudentRoll.put(33,"Sohan");
        StudentRoll.put(45,"Sidhant");
        StudentRoll.put(22,"Mohan");
        StudentRoll.put(15,"Rohit");

    //  size() :- Use to get the number of entries.
        System.out.println("Total Number of Student = " + StudentRoll.size());
    
        //  clear();- Use to emptythe map.
        StudentRoll.clear();

        System.out.println("After passing all student = " + StudentRoll);
    }
}
