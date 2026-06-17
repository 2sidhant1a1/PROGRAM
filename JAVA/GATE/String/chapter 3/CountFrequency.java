public class CountFrequency {
    public static void main(String[] args)
    {
        String str = "My self Sidhant Kumar. I am Coming from Jharkhand.";

        char target = 'a';
        String str2 = "";
        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch != target)
            {
                str2 += ch;
            }
        }

        System.out.println( str2);
    }
}
