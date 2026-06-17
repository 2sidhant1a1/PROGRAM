import java.util.HashMap;

public class ItratingOverEntries {
    public static void main(String[] args) {
        HashMap<Integer, String> StudentRoll = new HashMap<>();
        StudentRoll.put(23,"Rohit");
        StudentRoll.put(33,"Sohan");
        StudentRoll.put(45,"Sidhant");
        StudentRoll.put(22,"Mohan");
        StudentRoll.put(15,"Rohit");

        for(var entry: StudentRoll.entrySet())
        {
            System.out.println(entry.getKey() + " => "+ entry.getValue());
        }
    }
}
