abstract class Shape {

    abstract double area();
}

class Circle extends Shape
{
    double radious;
    public Circle(double r)
    {
        this.radious = r;
    }

    
    @Override
    double area()
    {
        return Math.PI * radious * radious;
    }
}
class Squre extends Shape
{
    double Side;
    public Squre(double Side)
    {
        this.Side = Side;
    }

    @Override
    double area()
    {
        return Side * Side;
    }
}
class Rectangle extends Shape
{
    double length, breadth;
    public Rectangle(double Length, double Breadth)
    {
        this.length = Length;
        this.breadth = Breadth;
    }

    @Override
    double area()
    {
        return length * breadth;
    }
}

public class abstractExample {
    public static void main(String[] args){
        Shape[] s = {new Circle(4.5), new Rectangle(65, 69),new Squre(5.6)};

        for(Shape a : s)
        {
            System.out.println("Area: " + a.area());
        }
        
    }
}
