/*
* Declares some variables related to the details of a particular individual.
* This included name, surname, age, height, weight, gender, and marital status.
* Then prompt the user to enter the values for these variables.
* Then displays this information on the console.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Variable declarations
	char name[50] = "";
	char surname[50] = "";
	int age;
	double height, weight;
	char gender;
	bool married;

    // User input
	printf("Name: ");
	scanf("%49s", name);

	printf("Surname: ");
	scanf("%49s", surname);

	printf("Age: ");
	scanf("%d", &age);

	printf("Height (cm): ");
	scanf("%lf", &height);

	printf("Weight (kg): ");
	scanf("%lf", &weight);

	printf("Gender (M for Male | F for Female): ");
	scanf(" %c", &gender);

    char married_input;
	printf("Married (Y|N): ");
	scanf(" %c", &married_input);
	married = (married_input == 'Y' || married_input == 'y') ? true : false;

    // Displaying the information
    printf("\n--- Personal Details ---\n");
	printf("Hello %s, following are your personal details:\n", name);
	printf("\tFull Name: %s %s\n", name, surname);
	printf("\tAge: %d years\n", age);
	printf("\tHeight: %.2lf cm\n", height);
	printf("\tWeight: %.2lf kg\n", weight);
	printf("\tGender: %s\n", (gender == 'M' || gender == 'm') ? "Male" : "Female");
	printf("\tMarital status: %s\n", married ? "Married" : "Not Married");

	return 0;
}
