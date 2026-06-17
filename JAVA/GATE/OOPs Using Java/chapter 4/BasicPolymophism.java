class Animal
{
    public void speak()
    {
        System.out.println("Animal speak");
    }
}
class Dog extends Animal
{
    @Override
    public void speak()
    {
        System.out.println("Dog speak: woof!");
    }
}
class Cat extends Animal
{
    @Override
    public void speak()
    {
        System.out.println("Cat speak: Meow!");
    }
}
public class BasicPolymophism
{
    public static void main(String[] args) 
    {
    //   Creating an array of Animal type
        Animal[] animals = new Animal[2];
        
    //   Storing Dog and Cat objects in the array
        animals[0] = new Dog();
        animals[1] = new Cat();

        for(Animal a: animals)
        {
            a.speak();
        }

    }
}