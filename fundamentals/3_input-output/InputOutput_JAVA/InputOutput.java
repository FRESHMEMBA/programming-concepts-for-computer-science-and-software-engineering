/*
 * Declares some variables related to the details of a particular individual.
 * This includes name, surname, age, height, weight, gender, and marital status.
 * Then prompts the user to enter the values for these variables.
 * Then displays this information on the console.
 */

import java.util.Scanner;

public class InputOutput {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);	// Declares an input scanner to read from the console

		// Variable Declarations
		String name = "", surname = "";
		int age;
		double height, weight;
		char gender;
		boolean married;

		// User Input
		System.out.print("Name: ");
		name = scanner.nextLine();

		System.out.print("Surname: ");
		surname = scanner.nextLine();

		System.out.print("Age: ");
		age = scanner.nextInt();

		System.out.print("Height (cm): ");
		height = scanner.nextDouble();

		System.out.print("Weight (kg): ");
		weight = scanner.nextDouble();

		System.out.print("Gender (M for Male | F for Female): ");
		gender = scanner.next().charAt(0);

		System.out.print("Married (true | false): ");
		married = scanner.nextBoolean();

		// Output to Console
		System.out.println("\n--- PERSONAL DETAILS ---");
		System.out.println("Hello " + name + ", following are your personal details:");
		System.out.println("\tFull Name: " + name + " " + surname);
		System.out.println("\tAge: " + age);
		System.out.println("\tHeight: " + height + " cm");
		System.out.println("\tWeight: " + weight + " kg");
		System.out.println("\tGender: " + ((gender == 'm' || gender == 'M') ? "Male" : "Female"));
		System.out.println("\tMarital Status: " + (married ? "Married" : "Not Married"));

		scanner.close();	// Close the scanner to prevent resource leaks
	}
}