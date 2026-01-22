/**
 * Declares some variables related to the details of a particular individual.
 * This includes name, surname, age, height, weight, gender, and marital status.
 * Then prompts the user to enter the values for these variables.
 * Then displays this information on the console.
 */

using System;

namespace InputOutput
{
    class Program
    {
        public static void Main(string[] args)
        {
            // Variable declarations
            string name = "", surname = "";
            int age;
            double height, weight;
            char gender;
            bool married;

            // Input from user
            Console.Write("Name: ");
            name = Console.ReadLine();

            Console.Write("Surname: ");
            surname = Console.ReadLine();

            Console.Write("Age: ");
            age = int.Parse(Console.ReadLine());

            Console.Write("Height (cm): ");
            height = double.Parse(Console.ReadLine());

            Console.Write("Weight (kg): ");
            weight = double.Parse(Console.ReadLine());

            Console.Write("Gender (M for Male | F for Female): ");
            gender = Console.ReadLine()[0];

            Console.Write("Married (true | false): ");
            married = bool.Parse(Console.ReadLine());

            // Output to console
            Console.WriteLine("\n--- PERSONAL DETAILS ---");
            Console.WriteLine("Hello " + name + ", following are your details:");
            Console.WriteLine("\tFull Name: " + name + " " + surname);
            Console.WriteLine("\tAge: " + age + " years");
            Console.WriteLine("\tHeight: " + height + " cm");
            Console.WriteLine("\tWeight: " + weight + " kg");
            Console.WriteLine("\tGender: " + ((gender == 'M' || gender == 'm') ? "Male" : "Female"));
            Console.WriteLine("\tMarital Status: " + (married ? "Married" : "Not Married"));
        }
    }
}
