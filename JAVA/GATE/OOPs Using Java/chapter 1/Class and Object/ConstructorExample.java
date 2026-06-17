class StudentMarks
{
    String name;
    int marks;
    // Constructor with paramenters
    public StudentMarks(String name, int marks)
    {
        this.name = name;
        this.marks = marks;
    }
    public void showResult()
    {
        double persentage = (marks/500)*100;
        System.out.println(" Name: "+name+" ,\n Marks: "+marks+", \n Persentage: "+persentage);
    }

}

public class ConstructorExample {
    public static void main(String[] args) {
        StudentMarks s = new StudentMarks("Sidhant", 245);
        s.showResult();
    }
    
}
