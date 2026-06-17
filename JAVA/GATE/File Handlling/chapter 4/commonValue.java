import java.util.*;

public class commonValue {
    public static void main(String[] args) {
        int[] nums1 = {4, 9, 4, 5};
        int[] nums2 = {9, 4, 9, 8, 4};

        ArrayList<Integer> common = new ArrayList<>();
        for (int i : nums1) {
            common.add(i);
        }

        for (int j : nums2) {
            int index = common.indexOf(j);
            if (index != -1) {  // If element exists
                System.out.print(j + ", ");
                common.remove(index);
            }
        }
    }
}