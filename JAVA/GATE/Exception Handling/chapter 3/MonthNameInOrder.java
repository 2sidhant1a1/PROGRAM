enum Month 
{
    JANUARY,
    FEBRUARY, 
    MARCH, 
    APRIL, 
    MAY, 
    JUNE, 
    JULY, 
    AUGUST, 
    SEPTEMBER, 
    OCTOBER, 
    NOVEMBER, 
    DECEMBER;
}
public class MonthNameInOrder {
    public static void main(String[] args) {
        for(Month m: Month.values() )
        {
            System.out.println(m.name()+ " --> " + (m.ordinal()+1));
        }
    }
}
