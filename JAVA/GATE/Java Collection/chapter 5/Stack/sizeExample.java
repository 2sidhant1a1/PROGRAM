import java.util.Stack;

public class sizeExample {
    public static void main(String[] args)
    {
        Stack<String> num = new Stack<>();
        num.push("One");
        num.push("Two");
        num.push("Three");
        num.push("Four");
        num.push("Five");
        num.push("Six");
        
    //   size():- Use to find total no. of element in size.
        int size = num.size();
        System.out.println("Number of element in stack: " + size);
    } 
}
