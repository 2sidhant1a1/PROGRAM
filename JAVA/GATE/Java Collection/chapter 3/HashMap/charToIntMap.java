import java.util.HashMap;

public class charToIntMap {
    public static void main(String[] args) {
        
        HashMap<Character,Integer> ascii = new HashMap<>();
        ascii.put('A',65);
        ascii.put('C',67);
        ascii.put('B',66);
        ascii.put('D',68);
        ascii.put('E',69);

        // first approch
        int sum = 0;
        for(var entry: ascii.entrySet())
        {
            sum +=entry.getValue();
        }
        System.out.println("Sum of value = "+ sum);

        // second approch
        int sumNum =0;
        for(int num: ascii.keySet())
        {
            sumNum += num;
        }
        System.out.println("sum = "+sumNum);

        // third approch
        sum = 0;
        for(char letter: ascii.keySet())
        {
            sum += ascii.get(letter);
        }
        System.out.println("SUM = "+sum);
        


    }
    
}
