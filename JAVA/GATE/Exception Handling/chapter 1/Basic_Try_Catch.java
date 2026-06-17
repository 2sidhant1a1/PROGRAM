

public class Basic_Try_Catch {
    public static void main(String[] args){
        try
        {
           double val = 10/0;
        }
        catch(ArithmeticException e){
            System.out.println("Error Found :"+ e.getMessage());
        }
        System.out.println();
    }
    
}
