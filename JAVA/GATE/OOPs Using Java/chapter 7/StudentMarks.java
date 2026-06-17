class Student {
    protected int[] marks;

    public Student(int[] marks) {
        this.marks = marks;
    }

    public double calculateAverage() {
        int sum = 0;
        for (int mark : marks) {
            sum += mark;
        }
        return (double) sum / marks.length;
    }
}
class SportsStudent extends Student {
    private int athleticScore;

    public SportsStudent(int[] marks, int athleticScore) {
        super(marks);
        this.athleticScore = athleticScore;
    }

    @Override
    public double calculateAverage() {
        int sum = athleticScore;
        for (int mark : marks) {
            sum += mark;
        }
        return (double) sum / (marks.length + 1);
    }
}
public class StudentMarks {
    public static void main(String[] args) {
        int[] academicMarks = {85, 90, 88};

        Student s1 = new Student(academicMarks);
        System.out.println("Academic Avg: " + s1.calculateAverage());

        SportsStudent s2 = new SportsStudent(academicMarks, 75);
        System.out.println("Sports Student Avg (with athletic score): " + s2.calculateAverage());
    }
}