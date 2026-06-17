import java.util.Scanner;
public class ArrayLenth {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] a = new int[5];

        int size = a.length;

        for(int i = 0; i < size; i++)
        {
            a[i] = sc.nextInt();
        }

        System.out.println("Your element are:-");

        for(int i: a)
        {
            System.out.println(i);
        }
        
        sc.close();
    }
    
}
