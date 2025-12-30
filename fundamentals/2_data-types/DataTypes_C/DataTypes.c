// Declares some variables related to the details of a particular individual.
// This includes name, surname, age, height, weight, gender, and marital status.
// Then prints the values of these variables on the console.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char name[] = "Jane";
    char surname[] = "Doe";
    int age = 33;
    float height = 125.6f;  // cm
    double weight = 72.5;  // kg
    char gender = 'F';  // female
    bool married = false;

    printf("Name: %s\n", name);
    printf("Surname: %s\n", surname);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.2f\n", weight);
    printf("Gender: %c\n", gender);
    printf("Married: %s\n", married ? "true" : "false");
    
    return 0;
}
