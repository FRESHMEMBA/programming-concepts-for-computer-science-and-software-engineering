/**
 * Declares some variables related to the details of a particular individual.
 * This includes name, surname, age, height, weight, gender, and marital status.
 * Then prompts the user to enter the values for these variables.
 * Then displays this information on the console.
 */
#include <iostream>
#include <string>

int main()
{
	// Variable Declarations
	std::string name = "", surname = "";
	int age;
	double height, weight;
	char gender;
	bool married;

	//User Input
	std::cout << "Name: ";
	std::cin >> name;

	std::cout << "Surname: ";
	std::cin >> surname;

	std::cout << "Age: ";
	std::cin >> age;

	std::cout << "Height (cm): ";
	std::cin >> height;

	std::cout << "Weight (kg): ";
	std::cin >> weight;

	std::cout << "Gender (M for Male | F for Female): ";
	std::cin.get();
	std::cin >> gender;

	std::cout << "Married (1 for Yes | 0 for No): ";
	std::cin.get();
	std::cin >> married;

	// Displaying the Information
	std::cout << "\n--- Personal Details ---\n";
	std::cout << "Hello " << name << ", following are your personal details:" << std::endl;
	std::cout << "\tFull Name: " << name << " " << surname << std::endl;
	std::cout << "\tAge: " << age << std::endl;
	std::cout << "\tHeight: " << height << std::endl;
	std::cout << "\tWeight: " << weight << std::endl;
	std::cout << "\tGender: " << ((gender == 'm' || gender == 'M') ? "Male" : "Female") << std::endl;
	std::cout << "\tMarital Status: " << (married ? "Married" : "Not Married") << std::endl;

	return 0;
}
