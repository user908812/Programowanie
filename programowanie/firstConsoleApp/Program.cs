
//float number = 9999999999;

//for (float i = 0; i <= number; i++)
//{
//    Console.WriteLine("Witam");
//}

Console.Write("Hello world! \n");
Console.WriteLine("Hello world!");

const string name = "Jan";
const string surname = "Kowalski";
const double age = 25.5;
int speed = 80;

Console.WriteLine("Witaj {1} {0}! Masz {2} lat.", name, surname, age); // Witaj Kowalski Jan! Masz 25,5 lat.
Console.WriteLine($"Predkosc: {speed} km\\h");

int firstNumber = 5;
int secondNumber = firstNumber;

secondNumber = 6;

Console.WriteLine($"firstNumber: {firstNumber}");
Console.WriteLine($"secondNumber: {secondNumber}");

void ParameterTest_v1(int p)
{
    Console.WriteLine($"Przed zmianą ParameterTest_v1: {p}");
    p++;
    Console.WriteLine($"Po zmianie ParameterTest_v1: {p}");
}

firstNumber = 99;
Console.WriteLine($"Przed ParameterTest_v1: {firstNumber}");
ParameterTest_v1(firstNumber);
Console.WriteLine($"Po ParameterTest_v1: {firstNumber}");