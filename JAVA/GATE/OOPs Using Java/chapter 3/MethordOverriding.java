class Animal
{
    public void sound()
    {
        System.out.println("All animal has Unique sound.");
    }
    public void move()
    {
        System.out.println("Animal moves.");
    }
}

class Dog extends Animal{
    @Override
    public void sound()
    {
        super.sound();
        System.out.println("Dog says: Bhoo Bhoo");
    }
    @Override
    public void move(){
        super.move();
        System.out.println("dog run.");
    }
    public void fetch(){
        System.out.println("Dog running for the ball to fetch it.");
    }
}

public class MethordOverriding {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.sound();
        d.move();
        d.fetch();
    }
    
}
