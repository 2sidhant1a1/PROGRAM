public class GetterAndSetter {
    private String name;
    private int age;

    // Getter for name
    public String getName() {
        return name;
    }

    // Setter for name
    public void setName(String n) {
        this.name = n;
    }

    // Getter for age
    public int getAge() {
        return age;
    }

    // Setter for age
    public void setAge(int a) {
        this.age = a;
    }

    public static void main(String[] args) {
        GetterAndSetter p1 = new GetterAndSetter();
        
        // Setting values
        p1.setName("Sidhant");
        p1.setAge(34);

        // Retrieving and printing values
        System.out.println("Name: " + p1.getName());
        System.out.println("Age: " + p1.getAge());
    }
}