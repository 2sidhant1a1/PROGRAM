abstract class Shape 
{
    public abstract void draw();
}
class Circle extends Shape
{
    @Override
    public void draw()
    {
        System.out.println("Draw: Circle");
    }
}
class Square extends Shape
{
    @Override
    public void draw()
    {
        System.out.println("Draw: Square");
    }
}

public class ShapeDrawing {
    public static void main(String[] args) {
        Shape[] s = { new Circle(), new Square()};

        for(Shape si : s)
        {
            si.draw();
        }

    }
    
}
