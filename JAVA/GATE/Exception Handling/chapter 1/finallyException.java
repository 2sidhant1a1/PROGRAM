public class finallyException {
    public static void main(String[] args) {
        try{
            System.out.println("Inside try BLock.");
            int result = 10;
        }
        catch(Exception ex)
        {
            System.out.println(("Exception cought :"+ ex.getMessage()));
        }
        finally
        {
            System.out.println("Finally block is running.");    
        }
    }

}
