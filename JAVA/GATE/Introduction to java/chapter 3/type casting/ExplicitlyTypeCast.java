public class ExplicitlyTypeCast {
    public static void main(String[] args)
    {
        /*
        double a = 4.56;
        int b = (int)a;
        System.out.println(a+"\n"+b);
        */

        long number = 123456789123456789L;
        int aprox = (int) number;
        System.out.println(aprox);
    }
    
}
