import java.util.Scanner;
public class TakeInpute {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Integer
        System.out.print("Enter integer value: ");
        int data = sc.nextInt();
        // Double
        System.out.print("Enter first Double value: ");
        double value1 = sc.nextDouble();
        System.out.print("Enter second Double value: ");
        double value2 = sc.nextDouble();
        // Boolean
        System.out.print("Enter boolean value: ");
        boolean Istrue = sc.nextBoolean();
        // String
        System.out.println("Enter text: ");
        String text = sc.nextLine();
        
        sc.close();

        System.out.println("Integer --> "+data);
        System.out.println("Double value 1 --> "+value1);
        System.out.println("Double value 2 --> "+value2);
        System.out.println("Boolean --> "+Istrue);
        System.out.println("String text --> "+text);

        
    }
    
}
