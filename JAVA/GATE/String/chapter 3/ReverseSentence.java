public class ReverseSentence {
    public static void main(String[] args) {
        
        String str = "My self Sidhant Kumar. I am Coming from Jharkhand.";

        String word = "";
        String rev = "";

        for(int i = str.length() -1; i>=0; i--)
        {
            char ch = str.charAt(i);
            if(ch == ' ')
            {
                rev =rev + " " + word;
                word = "";
            }
            else
            {
                word = ch + word;
            }
        }
        rev = rev + " "+word;

        System.out.println("Sentences : " + str);
        System.out.println("Reverse Sentence: " + rev);
    }
}
