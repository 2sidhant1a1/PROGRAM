
public class JavaSwaping {
    public static void main(String[] args)
    {
        // Using 3rd Variable
        System.out.println("Using 3rd Variable");
        int a = 15;
        int b = 35;

        //swaping
        int temp = a;
        a = b;
        b = temp;

        System.out.println("A: "+a);
        System.out.println("B: "+b);


        //Without Using 3rd Variable
        System.out.println("Without Using 3rd Variable");
        int x = 10, y = 20;
        //swaping
        x = x + y;
        y = x - y;
        x = x - y;

        System.out.println("X: "+x);
        System.out.println("Y: "+y);
    }
}
