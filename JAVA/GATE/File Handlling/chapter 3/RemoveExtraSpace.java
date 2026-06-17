

public class RemoveExtraSpace {
    public static void main(String[] args) {
        String ip = "sidhant      kumar                     is      a       worker. ";

        String result = ip.replaceAll("\\s+", " ");

        System.out.println(ip);
        System.out.println(result);
    }
}
