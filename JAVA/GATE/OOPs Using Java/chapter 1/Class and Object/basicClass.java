class SillyAnimal{
    //Instance variable
    String type;
    int age;
    // Method to display details
    public void displayInfo()
    {
        System.out.println("Type:"+type+", Age:"+age);
    }
}
public class basicClass{
    public static void main(String[] args) {
    //  Creating an object of Animal
        SillyAnimal a= new SillyAnimal();
        a.type = "Cat";
        a.age = 3;
        a.displayInfo();    
    }
}
