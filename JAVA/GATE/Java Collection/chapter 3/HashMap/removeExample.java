import java.util.HashMap;

public class removeExample {
    public static void main(String[] args) {
    
        HashMap<Integer, String> devlopmentRank = new HashMap<>();
        devlopmentRank.put(1,"US");
        devlopmentRank.put(2,"Russia");
        devlopmentRank.put(3,"china");
        devlopmentRank.put(4,"India");
        devlopmentRank.put(5,"Pakistan");
    
    //  remove(Key) :- Use to delete the entry.
        devlopmentRank.remove(5);

        System.out.println("Country Capitals: " + devlopmentRank); 
    }   
}
