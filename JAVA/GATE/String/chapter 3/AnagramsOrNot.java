public class AnagramsOrNot {
    public static void main(String[] args) {
        String str = "Sidhant Kumar";
        String str2 = "kamur isdhtna";

        int n1 = str.length();
        int n2 = str2.length();
        
        char[] array = new char[26];

        boolean flag = true;
        if(n1 != n2)
        {
            System.out.println("No");
            return;
        }

        for(int i=0; i<n1; i++)
        {
            char ch = str.charAt(i);
            if(ch >= 'a' && ch <= 'z')
            {
                array[ch-97]++;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                array[ch-65]++;
            }
        }
        for(int i=0; i<n1; i++)
        {
            char ch = str.charAt(i);
            if(ch >= 'a' && ch <= 'z')
            {
                array[ch-97]--;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                array[ch-65]--;
            }
        }

        for(int i: array)
        {
            if(i != 0)
            {
                flag = false;
            }
        }
        
        if(flag)
        {
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

    }
}
