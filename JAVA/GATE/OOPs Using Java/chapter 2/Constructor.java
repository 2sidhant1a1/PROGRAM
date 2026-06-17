
public class Constructor {
    int x,y;

    public Constructor()
    {
        this.x=0;
        this.y=0;
    }

    public Constructor(int x, int y)
    {
        this.x=x;
        this.y=y;
    }

    @Override 
    public String toString() //toString() is a pre-defined function
    {
        return "\"x co-ordinate is "+x+" and y co-ordinate is "+y+"\".";
    }


    public static void main(String[] args) {
        
        Constructor c1 = new Constructor();
        Constructor c2 = new Constructor(3,4);

        System.out.println("C1 = "+ c1);
        System.out.println("C2 = "+ c2);
    }
}
