public class Nested_Try_Catch {
    public static void main(String[] args) {
        try
        {
            int[] a =new int[5];
            a[5] = 10/0;
            try{
                int result = a[5];
            }catch(Exception e)
            {
                System.out.println("Internal Catch:"+e.getMessage());
            }

        }catch(Exception e)
        {
            System.out.println("External Catch: "+ e.getMessage());
        }
    }
}
