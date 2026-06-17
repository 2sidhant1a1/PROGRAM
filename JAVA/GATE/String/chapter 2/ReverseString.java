public class ReverseString {
    public static void main(String[] args) {
        
        String name = "Sidhant kumar";
        char[] ch = name.toCharArray();
        
        String result = "";
        for(int i = 0; i<ch.length; i++)
        {
            result = ch[i] + result;
        }
        
        System.out.println(name);
        System.out.println(result);

    }
}
