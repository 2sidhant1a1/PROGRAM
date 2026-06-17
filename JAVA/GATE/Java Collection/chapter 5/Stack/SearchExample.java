import java.util.Stack;

public class SearchExample 
{
    public static void main(String[] args)
    {
        Stack<String> num = new Stack<>();
        num.push("First");
        num.push("Second");
        num.push("Thired");
        num.push("Forth");
        num.push("Fifth");
        num.push("Sixth");

    //  search(): use to find the position of element from top of stack.
        int pos = num.search("Second");
        System.out.println("Position of Second in Stack: " + pos);

    /*  Note: If search a element in stack but element is not present
                in stack it return -1. */
        int pos2 = num.search("Seven");
        System.out.println("Seven is not present in stack: " + pos2);
    }    
}
