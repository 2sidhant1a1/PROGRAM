import java.util.HashSet;

public class GettingSize {
    public static void main(String[] args)
    {
        HashSet<String> shoes = new HashSet<>();
        shoes.add("Nike");
        shoes.add("Adidas");
        shoes.add("Puma");
        shoes.add("Reebok");
        shoes.add("vans");
        shoes.add("Bata");
        shoes.add("Nike");// duplicate
        shoes.add("Red Chief");

    //  size():- Use to find the no. of element.
        int NumOfBrandPresent = shoes.size();

        System.out.println("Avilable Shoes Brand: "+ NumOfBrandPresent);
    }
    
}
