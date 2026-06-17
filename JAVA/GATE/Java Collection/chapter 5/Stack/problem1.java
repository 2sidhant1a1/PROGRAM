/*
 * Problem Statment:- Push a swquence of integers onto a stack and then
                         pop all elements to print them.
 */

import java.util.Stack;

public class problem1 {
    public static void main(String[] args)
    {
        Stack<String> num = new Stack<>();
        num.push("First");
        num.push("Second");
        num.push("Thired");
        num.push("Forth");
        num.push("Fifth");
        num.push("Sixth");

        System.out.println("After the Use of pop: " + num);

        while(!num.empty())
        {
            System.out.println("Pop element: " + num.pop());
        }

        System.out.println("Before the Use of pop: " + num);
    } 
}
