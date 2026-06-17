class Calculator
{
    public void add(int value_1, int value_2)
    {
        System.out.println("Adition: "+(value_1 + value_2));
    }
    public void add(int value_1, int value_2, int value_3)
    {
        System.out.println("Adition: "+ (value_1 + value_2 + value_3));
    }
    public void add(double value_1, double value_2)
    {
        System.out.println("Adition: "+(value_1+value_2));
    }

}
public class CalculatorOverloading {
    public static void main(String[] args)
    {
        Calculator c = new Calculator();
        c.add(45,65);
        c.add(65,45,22);
        c.add(45.3,24.6);
    }
}
