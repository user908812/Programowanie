using System;

namespace WypozyczalniaFilmow
{
    // Klasa film
    class Film
    {
        // Chronione pola — dostęp tylko w klasie i w dziedziczeniu
        protected string tytul;
        protected int liczbaWypozyczen;

        // Konstruktor — inicjalizacja wartości
        public Film()
        {
            tytul = "";
            liczbaWypozyczen = 0;
        }

        // Setter tytułu
        public void UstawTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
            {
                tytul = nowyTytul;
            }
            else
            {
                Console.WriteLine("Tytuł za długi (max 20 znaków).");
            }
        }

        // Getter tytułu
        public string PobierzTytul()
        {
            return tytul;
        }

        // Getter liczby wypożyczeń
        public int PobierzLiczbeWypozyczen()
        {
            return liczbaWypozyczen;
        }

        // Metoda inkrementująca liczbę wypożyczeń
        public void ZwiekszWypozyczenia()
        {
            liczbaWypozyczen++;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // Tworzenie obiektu film
            Film film = new Film();

            // Wyświetlenie startowych wartości
            Console.WriteLine("Stan początkowy:");
            Console.WriteLine("Tytuł: " + film.PobierzTytul());
            Console.WriteLine("Liczba wypożyczeń: " + film.PobierzLiczbeWypozyczen());

            // Test settera
            film.UstawTytul("Matrix");

            // Test gettera
            Console.WriteLine("\nPo ustawieniu tytułu:");
            Console.WriteLine("Tytuł: " + film.PobierzTytul());

            // Test inkrementacji
            Console.WriteLine("\nTest zwiększenia liczby wypożyczeń:");
            Console.WriteLine("Przed: " + film.PobierzLiczbeWypozyczen());
            film.ZwiekszWypozyczenia();
            Console.WriteLine("Po: " + film.PobierzLiczbeWypozyczen());

            Console.WriteLine("\nNaciśnij klawisz, aby zakończyć...");
            Console.ReadKey();
        }
    }
}
