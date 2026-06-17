import java.util.HashSet;

public class ForLoopIterate {
    public static void main(String[] args) {
        HashSet<String> shoes = new HashSet<>();
        shoes.add("Nike");
        shoes.add("Adidas");
        shoes.add("Puma");
        shoes.add("Reebok");
        shoes.add("vans");

        System.out.println("Shoes Brand are available:-");
        for(String ShoesBrand: shoes)
        {
            System.out.println(ShoesBrand);
        }
    }
    
}
