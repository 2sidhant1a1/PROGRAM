
public class PrintSecondIndex {
    public static void main(String[] args) {
        String str = "hello";
        char ch = 'l';

        int firstIndex = str.indexOf(ch);
        int secondIndex = str.indexOf(ch,firstIndex +1);

        System.out.println("Second occurrence "+secondIndex);
    }
}
