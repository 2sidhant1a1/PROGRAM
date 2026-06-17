import java.util.HashMap;

public class problem {
    public static void main(String[] args) {
        int[] arr = {2,7,11,15};
        int target = 20;

        HashMap<Integer, Integer> map1 = new HashMap<>();

        for(int i=0; i<arr.length; i++)
        {
            map1.put(arr[i],i);
        }

        for(int i=0; i<arr.length; i++)
        {
            int complement = target - arr[i];

            if(map1.containsKey(complement) && map1.get(complement) != i)
            {
                System.out.println(i+","+map1.get(complement));
                break;
            }
        }
    }
}
