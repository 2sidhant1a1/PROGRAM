public class multiCatch {
    public static void main(String[] args) {
        try{
            System.out.println("Inside try BLock.");
            int result = 10;
            String[] arr = new String[5];
            arr[10] = "hi";
        } 
        catch(ArithmeticException e)
        {
            System.out.println("Exception caught:"+ e.getMessage());
        }
        catch(Exception ex)
        {
            System.out.println(("Exception :"+ ex.getMessage()));
        }
    }
}
