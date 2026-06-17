
public class problem {
    public static class Calculator
    {
        public int sum(int x, int y)
        {
            return x+y;
        }
        public int sub(int x, int y)
        {
            return x-y;
        }
    }
    public static void main(String[] args) {
        Calculator cal = new Calculator();
        int sum_Result = cal.sum(4,6);
        int sub_Result = cal.sub(5,2);

        System.out.println("Adition: " + sum_Result);
        System.out.println("Subtraction: " + sub_Result);
    }
    
}
