public class SumOfArray {
    public static void main(String[] args) {
        int[] a = {1,3,2,7,8,6,9};
        int n = a.length;
        int sumOfAllElm = 0;
        int sumOfEvenIndex = 0;
        int sumOfOddElem = 0;
        for(int i=0; i<n; i++)
        {
            sumOfAllElm += a[i];
            if(i % 2 == 0)
            {
                sumOfEvenIndex += a[i];
            }
            if(a[i] % 2 == 1)
            {
                sumOfOddElem += a[i];
            }
        }
        System.out.println("Sum Of All Element = "+sumOfAllElm);
        System.out.println("Sum Of Element Present At Even index = "+sumOfEvenIndex);
        System.out.println("Sum Of All Odd Element = "+sumOfOddElem);
        
    }
    
}
