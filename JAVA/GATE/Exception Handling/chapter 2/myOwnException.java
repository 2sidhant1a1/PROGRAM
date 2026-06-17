import java.util.Scanner;
class AgeException extends Exception
{
    public AgeException(String message)
    {
        super(message);
    }
}
public class myOwnException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = sc.nextInt();

        try{
            if( age < 18)
            {
                throw new AgeException("You are not allowed to visit.");
            } else {
                System.out.println("You are eligible to visit.");
            }
            
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
        finally{
            sc.close();
        }
    }
    
}
