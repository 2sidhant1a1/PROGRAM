
public class OverloadExample {
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method to add two double numbers
    double add(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {
        OverloadExample obj = new OverloadExample();
        
        System.out.println("Sum of 5 and 10: " + obj.add(5, 10));
        System.out.println("Sum of 5, 10 and 15: " + obj.add(5, 10, 15));
        System.out.println("Sum of 5.5 and 10.5: " + obj.add(5.5, 10.5));
    }
}
