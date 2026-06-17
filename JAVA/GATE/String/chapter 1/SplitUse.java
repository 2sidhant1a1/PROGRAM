public class SplitUse {
    public static void main(String[] args) {
        String str = "Java Programming Language";
        String[] words = str.split(" ");
        
        for(String word: words)
        {
            System.out.println(word);
        }
    }
}
