

public class WordSeprate{
    public static void main(String[] args) {
        String inpute = "Sidnat,Sumit,Sunny";

        String[] Words = inpute.split(",");
        for(String word: Words)
        {
            System.out.println(word);
        }
    }
}