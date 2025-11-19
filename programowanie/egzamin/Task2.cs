
/*
     ->   Egzamin 2023-06
*/

class Program1
{
    static void Main()
    {
        Film film = new Film();

        Console.WriteLine("Tytuł: " + film.Title);
        Console.WriteLine("Liczba wypożyczeń: " + film.numberOfRentals);

        film.Title = "Matrix";
        Console.WriteLine("\nPo zmianie tytylu:");
        Console.WriteLine("Tytuł: " + film.Title);

        Console.WriteLine("\nTest inkrementacji:");
        Console.WriteLine("Przed: " + film.numberOfRentals);
        film.Increment();
        Console.WriteLine("Po: " + film.numberOfRentals);
    }
}