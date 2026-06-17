public class palindrome {
    public static void main(String[] args) {
        
        String name = "hiih";
        char[] ch = name.toCharArray();
        
        String result = "";
        for(int i = 0; i<ch.length; i++)
        {
            result = ch[i] + result;
        }

        if(name.equals(result))
        {
            System.out.println("yes, it is palindrome.");
        }
        else
        {
            System.out.println("No, it not a palindrome.");
        }

    }
}
