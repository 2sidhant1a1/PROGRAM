// use to define stack
import java.util.Stack;

public class BasicStack {
    public static void main(String[] args) {
        
    //  Creating Stack variable name
        Stack<Integer> num = new Stack<>();
    
    //  Adding element from Stack
        num.push(10);
        num.push(20);
        num.push(30);
        num.push(40);
        num.push(50);

        System.out.println("Stack Element:- " + num);

    //  deleting last element from stack
        num.pop();
        System.out.println("Before Pop:- " + num);
    }
    
}
