
// egzamin 2022-06

public class Osoba
{
    private int id;
    private string imie;

    public static int LiczbaInstancji = 0;

    public Osoba()
    {
        id = 0;
        imie = "";
        LiczbaInstancji++;
    }

    public Osoba(int id, string imie)
    {
        this.id = id;
        this.imie = imie;
        LiczbaInstancji++;
    }

    public Osoba(Osoba innaOsoba)
    {
        this.id = innaOsoba.id;
        this.imie = innaOsoba.imie;
        LiczbaInstancji++;
    }

    public void Przywitaj(string imieRozmowcy)
    {
        if (imie == "")
        {
            Console.WriteLine("Brak danych");
        }
        else
        {
            Console.WriteLine($"Czesc {imieRozmowcy}, mam na imie {imie}");
        }
    }
}