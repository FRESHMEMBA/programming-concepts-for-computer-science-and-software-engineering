// Declares some variables related to the details of a particular individual.
// This includes name, surname, age, height, weight, gender, and marital status.
// Then prints the values of these variables on the console.

class DataTypes {
    public static void main(String [] args) {
        String name = "Jane";
        String surname = "Doe";
        int age = 33;
        float height = 125.6f;  // cm
        double weight = 72.5;  // kg
        char gender = 'f';  // female
        boolean married = false;

        System.out.println("Name: " + name);
        System.out.println("Surname: " + surname);
        System.out.println("Age: " + age);
        System.out.println("Height: " + height);
        System.out.println("Weight: " + weight);
        System.out.println("Gender: " + gender);
        System.out.println("Married: " + married);
    }
}
