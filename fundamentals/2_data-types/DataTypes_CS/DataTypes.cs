// Declares some variables related to the details of a particular individual.
// This includes name, surname, age, height, weight, gender, and marital status.
// Then prints the values of these variables on the console.

using System;

namespace DataTypes_CS
{
    class Program
    {
        public static void Main(string[] args)
        {
            String name = "Jane";
            String surname = "Doe";
            int age = 33;
            double height = 125.6;  // cm
            double weight = 72.5;  // kg
            char gender = 'f';  // female
            bool married = false;

            Console.WriteLine("Name: {0}", name);
            Console.WriteLine("Surname: {0}", surname);
            Console.WriteLine("Age: {0}", age);
            Console.WriteLine("Height: {0:F2}", height);
            Console.WriteLine("Weight: {0:F2}", weight);
            Console.WriteLine("Gender: {0}", gender);
            Console.WriteLine("Married: {0}", married);
        }
    }
}