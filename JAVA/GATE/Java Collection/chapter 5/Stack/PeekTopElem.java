import java.util.Stack;

public class PeekTopElem {
    public static void main(String[] args) {
        
    
        Stack<Integer> num = new Stack<>();
        num.push(10);
        num.push(20);
        num.push(30);
        num.push(40);
        num.push(50);

    //  peek():- use to show the Last Entered Element Form Stack
        int topElem = num.peek();
        System.out.println("Stack Top element: " + topElem);
    }
    
}
