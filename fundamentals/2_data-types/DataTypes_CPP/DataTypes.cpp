// Declares some variables related to the details of a particular individual.
// This includes name, surname, age, height, weight, gender, and marital status.
// Then prints the values of these variables on the console.

#include <iostream>
#include <string>

int main()
{
    std::string name = "Jane";
    std::string surname = "Doe";
    int age = 33;
    float height = 125.6;   // cm
    double weight = 72.5;  // kg
    char gender = 'f';  // female
    bool married = false;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Married: " << (married ? "true" : "false") << std::endl;

    return 0;
}
