import java.util.ArrayList;

public class ItratingForLoop {
    public static void main(String[] args)
    {
        ArrayList<Integer> num = new ArrayList<>();
        num.add(34);
        num.add(39);
        num.add(342);
        num.add(100);
        num.add(200);
        num.add(120);
        num.add(400);
        num.add(380);
        num.add(50);

        int Size = num.size();//Finding Size of ArrayList

        System.out.println("PRINT ELEMENT with INDICES.");
        for(int i=0; i<Size; i++) //Print each element using get().
        {
            System.out.println(num.get(i));
        }

            //     OR
        
        
        System.out.println("PRINT ELEMENT Without INDICES.");
        for(int number: num)
        {
            System.out.println(number);
        }    
    }
}
