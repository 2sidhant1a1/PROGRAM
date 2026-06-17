import java.util.ArrayList;

public class UpdatingElement {
    public static void main(String[] args) {
        
        ArrayList<Integer> num = new ArrayList<>();
        num.add(100);
        num.add(200);
        num.add(120);
        num.add(400);
        num.add(380);
        num.add(50);

        num.set(2,800);//Updating element

        System.out.println("After Updating: " + num);
    }    
}
