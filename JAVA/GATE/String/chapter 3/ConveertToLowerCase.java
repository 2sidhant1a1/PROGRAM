public class ConveertToLowerCase {
    public static void main(String[] args)
    {
        String str = "My self Sidhant Kumar. I am Coming from Jharkhand.";

        String LowerCase = "";

        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch <= 'Z')
            {
                LowerCase += (char)(ch + 32);
            }
            else
            {
                LowerCase += ch;
            }
        }

        System.out.println( LowerCase);
    }
}
