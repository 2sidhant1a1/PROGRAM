public class JavaSwitch
{
    public static void main(String[] args) {
        int day = 5;
        String WhichDay;
        switch(day)
        {
            case 1: WhichDay = "Monday";
                break;
            case 2: WhichDay = "Tuesday";
                break;
            case 7: WhichDay = "Sunday";
                break;
            case 6: WhichDay = "saturday";
                break;
            case 5: WhichDay = "Friday";
                break;
            case 4: WhichDay = "Thursday";
                break;
            case 3: WhichDay = "Wednesday";
                break;
            default: WhichDay = "Wrong day you choose.";
        }
        System.out.println("day = "+WhichDay);
    }
}