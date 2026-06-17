class AgeException extends Exception
{
    public AgeException(String str)
    {
        super(str);
    }
}
class WeightException extends Exception
{
    public WeightException(String str)
    {
        super(str);
    }
}
class HeightException extends Exception
{
    public HeightException(String str)
    {
        super(str);
    }
}
public class CustomerDetail {
    
    public static void main(String[] args)
    {
        String name = "Sunny Kumar";
        int age = 34;
        double weight = -55;
        double height = 20;
        try{
            if(age < 1)
            {
                throw new AgeException("Age can not be less then 1.");
            }
            else if(weight < 1)
            {
                throw new WeightException("Weight can not be less than 1.");
            }
            else if(height < 1)
            {
                throw new HeightException("Height can not be less than 1.");
            }
        }catch(Exception e)
        {
            System.out.println(e.getMessage());
        }

    }
}
