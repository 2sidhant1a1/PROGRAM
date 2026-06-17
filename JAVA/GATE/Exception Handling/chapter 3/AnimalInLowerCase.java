enum Animal
{
    DOG, CAT, RABBIT, COW, ELEPHANT, TIGER, LION; 

    @Override
    public String toString()
    {
        String ans = name() + " --> " + name().toLowerCase();
        return ans;
    }
    
}
public class AnimalInLowerCase {
    public static void main(String[] args) {
        System.out.println(Animal.DOG);
    }
    
}
