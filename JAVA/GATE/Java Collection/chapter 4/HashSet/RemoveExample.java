import java.util.HashSet;

public class RemoveExample {
    public static void main(String[] args) {
        HashSet<String> patients = new HashSet<>();

        patients.add("Vikash");
        patients.add("Sumit");
        patients.add("Suresh");
        patients.add("Deepak");
        patients.add("Deepak");

    //   remove(element):- use to delete the element.
        patients.remove("Deepak");

        System.out.println("Hospital Patients name:" + patients);

    }
}