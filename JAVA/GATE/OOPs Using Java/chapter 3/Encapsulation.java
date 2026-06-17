
public class Encapsulation {
    private int x; // hidden from outside
    private int y; // hidden from outside
    public Encapsulation(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    // Controlled axxess
    public int getX()
    {
        return x;
    }
    public int getY()
    {
        return y;
    }
    // main class
    public static void main(String[] args) {
        Encapsulation e = new Encapsulation(2,3);
        System.out.println("Point:("+e.getX()+","+e.getY()+")");
    }
}
