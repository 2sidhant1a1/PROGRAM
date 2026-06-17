import java.util.Stack;

public class Iterating {
    public static void main(String[] args)
    {
        Stack<String> num = new Stack<>();
        num.push("One");
        num.push("Two");
        num.push("Three");
        num.push("Four");
        num.push("Five");
        num.push("Six");
        
    //  print bottom to top according to stack
        for(String n: num)
        {
            System.out.println(n);
        }
    } 
}
