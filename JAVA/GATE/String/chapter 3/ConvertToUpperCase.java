public class ConvertToUpperCase {
    public static void main(String[] args)
    {
        String str = "My self Sidhant Kumar. I am Coming from Jharkhand.";

        String UpperCase = "";

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'a' && ch <= 'z')
            {
                UpperCase += (char)(ch - 32);
            }
            else
            {
                UpperCase += ch;
            }
        }

        System.out.println( UpperCase);
    }
}
