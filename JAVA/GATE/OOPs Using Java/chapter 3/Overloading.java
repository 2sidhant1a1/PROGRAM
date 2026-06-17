// Student class
class Student{
    private String name;
    private int age;

    public Student()
    {
        this("NA",0);
    }
    public Student(String name)
    {
        this(name,0);
    }
    public Student(String name,int age)
    {
        this.name = name;
        this.age = age;
    }
    public void displayInfo()
    {
        System.out.println("Name: "+name+"\t, Age: "+age );
    }
    
}

// main class
public class Overloading
{
    public static void main(String[] args) {
        Student s = new Student();
        Student s1 = new Student("SIDHANT");
        Student s2 = new Student("SUMIT",21);

        s.displayInfo();
        s1.displayInfo();
        s2.displayInfo();
    }
}

