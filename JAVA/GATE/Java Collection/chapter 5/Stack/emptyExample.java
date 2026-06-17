import java.util.Stack;

public class emptyExample {
    public static void main(String[] args) {
        
        Stack<Integer> num = new Stack<>();
    //  empty():- use to check stack is empty or not
        boolean Isempty = num.empty();
        System.out.println("Stack is empty: "+ Isempty);
        num.push(10);
        num.push(20);
        num.push(30);
        num.push(40);
        num.push(50);

    //  empty():- use to check stack is empty or not
        boolean Isempty2 = num.empty();
        System.out.println("Stack is empty after adding element: "+ Isempty2);
    }
}
