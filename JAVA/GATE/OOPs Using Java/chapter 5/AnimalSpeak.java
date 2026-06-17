

public class AnimalSpeak {
    public static class Animal
    {
        public void speak()
        {
            System.out.println("Animal can speak.");
        }
    }
    public static class Dog extends Animal
    {
        @Override
        public void speak()
        {
            System.out.println("Dog Speak like Woof!");
        }
    }
    public static class Cat extends Animal
    {
        @Override
        public void speak()
        {
            System.out.println("Cat Speak like Meow!");
        }
    }
    public static void main(String[] args)
    {
        Animal a1 = new Dog();
        Animal a2 = new Cat();

        a1.speak();
        a2.speak();
    }
    
}
