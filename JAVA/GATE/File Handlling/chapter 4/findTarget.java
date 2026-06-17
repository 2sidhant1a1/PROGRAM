import java.util.*;

public class findTarget
{
    public static void main(String[] args) {
        int[] arr = {4,5,7,11};
        int target = 9;

        Map<Integer, Integer> numMap = new HashMap<>();
        
        for(int i=0; i<arr.length; i++)
        {
            numMap.put(arr[i],i);
        }

        for(int i=0; i<numMap.size(); i++)
        {
            int compliment = target -arr[i];
            if(numMap.containsKey(compliment) && numMap.get(compliment) != i)
            {
                System.out.println("["+i+", "+numMap.get(compliment)+"]");
                break;
            }
        }

    }
}