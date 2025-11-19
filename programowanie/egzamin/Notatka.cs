
// egzamin 2023 (02)

/*
 ************************************************
 klasa: Notatka
 opis: klasa reprezentuje pojedyncza,
       która posiada tytuł, treść oraz unikalny identyfikator.
 pola: licznikNotatek – przechowuje liczbę wszystkich utworzonych notatek (pole statyczne)
       id – przechowuje unikalny numer (ID) notatki
       tytul – przechowuje tytuł notatki
       tresc – przechowuje treść notatki
 autor: 20
************************************************
 */

class Notatka
    {
        private static int licznikNotatek = 0;
        private int id;
        protected string tytul;
        protected string tresc;

        public Notatka(string tytul, string tresc)
        {
            licznikNotatek++;
            this.id = licznikNotatek;
            this.tytul = tytul;
            this.tresc = tresc;
        }

        public void Wyswietl()
        {
            Console.WriteLine("===================================");
            Console.WriteLine($"Tytuł: {tytul}");
            Console.WriteLine($"Treść: {tresc}");
            Console.WriteLine("===================================\n");
        }

        public void Diagnostyka()
        {
            Console.WriteLine($"{id};{tytul};{tresc};licznik={licznikNotatek}");
        }
    }
