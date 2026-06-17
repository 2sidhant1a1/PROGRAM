
public class countWord {
    public static void main(String[] args)
    {
        String str = "My self Sidhant Kumar. I am Coming from Jharkhand.";

        int count = 1;

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch == ' ')
            {
                count += 1;
            }
        }

        System.out.println("Words = "+count);
    }
}
