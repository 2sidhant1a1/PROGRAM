import java.util.HashMap;

public class keySetExample {
    public static void main(String[] args) {
        HashMap<Integer, String> StudentRoll = new HashMap<>();
        StudentRoll.put(23,"Rohit");
        StudentRoll.put(33,"Sohan");
        StudentRoll.put(45,"Sidhant");

    //  keySet() :- USe to extract all key.        
        for(int Roll: StudentRoll.keySet())
        {
            System.out.println(Roll +" -> "+StudentRoll.get(Roll));
        }
        
    }
    
}
