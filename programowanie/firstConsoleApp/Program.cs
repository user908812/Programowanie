
//float number = 9999999999;

//for (float i = 0; i <= number; i++)
//{
//    Console.WriteLine("Witam");
//}

// Przy ref nie mozesz dac STALEJ

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
//ParameterTest_v1(587);

void ParameterTest_v2(ref int p)
{
    Console.WriteLine($"Przed zmiana ParameterTest_v2: {p}");
    p++;
    Console.WriteLine($"Po zmianie ParameterTest_v2: {p}");
}

firstNumber = 99;
Console.WriteLine($"Przed ParameterTest_v2: {firstNumber}");
ParameterTest_v2(ref firstNumber);
Console.WriteLine($"Po ParameterTest_v2: {firstNumber}");

void ParameterTest_v3(out int p)
{
    p = 19;
    Console.WriteLine($"Po zmianie ParameterTest_v3: {p}");
}

int thirdNumber;
ParameterTest_v3(out thirdNumber);
Console.WriteLine($"Po ParameterTest_v3: {thirdNumber}");

string strNumber = "1234";
int number = int.Parse(strNumber);

if (int.TryParse(strNumber, out int secondConvertNumber))
{
    Console.WriteLine(secondConvertNumber);
}