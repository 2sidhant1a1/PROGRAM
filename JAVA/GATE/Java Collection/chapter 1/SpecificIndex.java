import java.util.ArrayList;

public class SpecificIndex {
    public static void main(String[] args) {
        ArrayList<String> name = new ArrayList<>();
        
        name.add("Sidhant");
        name.add("Sonu");
        name.add("Sunny");
        name.add("Sukumar");
        name.add("vikash");
        name.add("vivek");
        
        //adding element at a Specific index
        name.add(1,"Bob");
        
        int i=0;
        for(String n: name)
        {
            System.out.println(n +" (Index = "+i+++" )");
        }
    }
}

