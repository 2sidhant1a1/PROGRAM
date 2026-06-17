enum Light
{
    RED("Stop"), GREEN("Go ahead"), YELLOW("Be Ready");

    String message;

    Light(String message)
    {
        this.message = message;
    }

    public String getMessage()
    {
        return message;
    }
}
public class TrafficLight {
    public static void main(String[] args) {
        System.out.println("Message : " + Light.RED.getMessage());
    }
}
