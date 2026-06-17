

public class Practical1 {
    public static class simple_Calculator
    {
        public int add(int a, int b)
        {
            return a+b;
        }   
        public double add(double a, double b)
        {
            return a+b;
        }
        public int subtract(int a, int b)
        {
            return a-b;
        }
        public int multiple(int a, int b)
        {
            return a*b;
        }
        public int Division(int a, int b)
        {
            return a/b;
        }
    }
    public static class Scintific_calculator
    {
        public double power(int value, int power)
        {
            return Math.pow(value, power);
        }

        public double squarRoot(int value)
        {
            return Math.sqrt(value);
        }
        public double cosine(int value)
        {
            return Math.cos(value);
        }
        public double sin(int a)
        {
            return Math.sin(a);
        }
        public double logrithum(int value)
        {
            return Math.log(value);
        }
        public double tangent(int a)
        {
            return Math.tan(a);
        }
    }
    
    public static void main(String[] args)
    {
        simple_Calculator c = new simple_Calculator();
        System.out.println("Addition 2 and 4 : "+c.add(2, 4));
        System.out.println("Addition 2.3 and 4.6 : "+c.add(2.3, 4.7));
        System.out.println("substraction 2 and 4 : "+c.subtract(2, 4));
        System.out.println("Multiplication 2 and 4 : "+c.multiple(2, 4));
        System.out.println("Division 2 and 4 : "+c.Division(2, 4));

        Scintific_calculator sc = new Scintific_calculator();
        System.out.println("2 Power 4: "+sc.power(2, 4));
        System.out.println("square root of 16: "+ sc.squarRoot(4));
        System.out.println("log of 16: "+ sc.logrithum(4));
        System.out.println("sin of 16: "+ sc.sin(4));
        System.out.println("cos of 16: "+ sc.cosine(4));
    }
}