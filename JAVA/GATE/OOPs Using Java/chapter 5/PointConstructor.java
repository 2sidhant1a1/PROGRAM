class Point
{
    int x = 0;
    int y = 0;
    public Point()
    {
        this(0,0);
    }
    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
    public Point(Point st)
    {
        this.x = st.x;
        this.y = st.y;
    }
    
    @Override
    public String toString()
    {
        return "(x: "+x+" , y: "+y+")";
    }
}

public class PointConstructor {
    public static void main(String[] args) {
        Point p1 = new Point();
        Point p2 = new Point(45,34);
        Point p3 = new Point(p2);

        System.out.println(p1);
        System.out.println(p2);
        System.out.println("copy p2 into p3 using Constructor");
        System.out.println(p3);
    }

}
