abstract class Vehicle 
{
    String name;
    int speed;
    public Vehicle(String name, int speed)
    {
        this.name = name;
        this.speed = speed;
    }
    abstract void start();
    
}
class Car extends Vehicle
{
    public Car(String name, int speed)
    {
        super(name,speed);
    }

    @Override
    void start()
    {
        System.out.println(name+" is starting with speed: "+speed);
    }
}
class Bike extends Vehicle
{
    public Bike(String name, int speed)
    {
        super(name,speed);
    }

    @Override
    void start()
    {
        System.out.println(name+" is starting with speed: "+speed);
    }
}

public class VehicleAbstraction {

    public static void main(String[] args)
    {
        Vehicle c = new Car("Toyota", 120);
        c.start();

        Vehicle b = new Bike("Yamaha", 80);
        b.start();
    }
}
