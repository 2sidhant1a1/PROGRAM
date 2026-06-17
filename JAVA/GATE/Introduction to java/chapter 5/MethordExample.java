
public class MethordExample {
    public static void solve(int n)
    {
        if(n%3 == 0)
        {
            System.out.print("Fizz");
        }
        if(n%5 == 0)
        {
            System.out.print("Buzz");
        }
        System.out.println(" ");
    }
    public static void main(String[] args)
    {
        solve(15);

    }
}
