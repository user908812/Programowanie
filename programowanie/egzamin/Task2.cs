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

/*
Część I. Aplikacja konsolowa

Korzystając z mechanizmów programowania obiektowego zaprojektuj część logiki systemu wirtualnej wypożyczalni filmów. Zaimplementuj aplikację zawierającą klasę o nazwie film z metodami get, set oraz inkrementuj.

Założenia klasy:

Obiektowy język programowania zgodny z zainstalowanym na stanowisku egzaminacyjnym, jeden z: C++, C#, Java, Python.

Klasa film zawiera dwa pola zawierające tytuł oraz liczbę wypożyczeń. Dla uproszczenia można przyjąć, że tytuł może mieć maksymalnie 20 znaków. Dostęp do obu pól ma jedynie klasa. W przypadku późniejszego rozszerzenia klasy, klasy potomne powinny również mieć dostęp do tych pól.

Klasa film zawiera funkcjonalność:

inicjalizację pól wartością pustą lub 0 w zależności od typu

metodę ustawiającą tytuł (ang. setter)

metodę pobierającą tytuł (ang. getter)

metodę pobierającą liczbę wypożyczeń (ang. getter)

bezargumentową metodę realizującą inkrementację pola przechowującego liczbę wypożyczeń. Metoda nie zwraca żadnej wartości

Założenia aplikacji:

Inicjalizacja obiektu i wyświetlenie zawartości jego pól

Test działania metody set, poprzez ustawienie dowolnej wartości dla pola obiektu,

Test działania metody get, poprzez pobranie wartości z pola obiektu i wyświetlenie jej na ekranie

Test metody inkrementacji pola przechowującego liczbę wypożyczeń zrealizowany w ten sposób, że wyświetlona jest wartość pola przed i po zastosowaniu metody

Aplikacja powinna być zapisana czytelnie, z zachowaniem zasad czystego formatowania kodu, należy stosować znaczące nazwy pól i metod

Dokumentacja do aplikacji wykonana zgodnie z wytycznymi z części III zadania egzaminacyjnego.

Kod aplikacji przygotuj do nagrania na płytę. W podfolderze konsola powinno znaleźć się archiwum całego projektu o nazwie konsola.zip, plik z kodem źródłowym programu oraz plik wykonywalny, jeżeli istnieje
*/
