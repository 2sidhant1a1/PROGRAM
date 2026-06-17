public class day
{
    enum Day {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    }
    public static void main(String[] args) {
        Day today = Day.valueOf("FRIDAY");
        System.out.println("COnvert: "+today);
    }
}