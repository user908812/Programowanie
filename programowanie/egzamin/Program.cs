//NWD testNWD = new NWD();
//testNWD.Calculate(12, 36);
//testNWD.Calculate(9, 3);

Console.WriteLine();

Film film = new Film();
film.Increment();
Console.WriteLine($"Liczba wypozyczen: {film.numberOfRentals}.");

Notatka notatka1 = new Notatka("Sprawdzian", "Naucz sie na sprawdzian z matematyki");
notatka1.Wyswietl();

Osoba osoba1 = new Osoba();
osoba1.Przywitaj("Adam");

Osoba osoba2 = new Osoba(1, "Sebastian");
osoba2.Przywitaj("Marek");

Console.WriteLine($"\nLiczba utworzonych instancji: {Osoba.LiczbaInstancji}");

// czesc 3

Osoba osoba_1 = new Osoba();

Console.Write("Podaj id: ");
int id = int.Parse(Console.ReadLine());

Console.Write("Podaj imię: ");
string imie = Console.ReadLine();

Osoba osoba_2 = new Osoba(id, imie);

Osoba osoba_3 = new Osoba(osoba_2);

Console.WriteLine("\nTestowanie metody Przywitaj(\"Jan\"):\n");
osoba_1.Przywitaj("Jan");
osoba_2.Przywitaj("Jan");
osoba_3.Przywitaj("Jan");

Console.WriteLine($"\nLiczba zarejestrowanych osób to {Osoba.LiczbaInstancji}");