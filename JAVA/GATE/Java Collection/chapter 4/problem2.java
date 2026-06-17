/*
  Given an array list of All the products
  and given a HashSet of all the defective products,
  Create a HashSet of all the non-defective products.
 */
import java.util.*;

public class problem2 {
    public static void main(String[] args)
    {
        ArrayList<String> products = new ArrayList<>();
        products.add("Detergent");
        products.add("soap");
        products.add("Toothpaste");
        products.add("salt");
        products.add("sugar");
        products.add("Raise");
        products.add("Water");
        products.add("Cokacola");
        System.out.println("Products: "+ products);

        HashSet<String> defectProduct = new HashSet<>();
        defectProduct.add("Cokacola");
        defectProduct.add("Toothpaste");
        defectProduct.add("Water");
        System.out.println("Defective Products: " + defectProduct);

        for(String product: defectProduct)
        {
            products.remove(product);
        }

        HashSet<String> NonDefProduct = new HashSet<>(products);

        System.out.println("Non-Defective Products: " + NonDefProduct);
    }
    
}
