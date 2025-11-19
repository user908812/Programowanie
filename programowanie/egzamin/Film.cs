
/*
 ******************************************************
nazwa klasy: Film

pola:  
- title – przechowuje tytul filmu  
- rentalsNumber – przechowuje liczbe wypozyczen  

metody:  
- Film(), konstruktor – ustawia wartosci początkowe pol  
- Title, string – właściwośc do odczytu i zapisu tytulu 
- numberOfRentals, int – wlasciwosc tylko do odczytu liczby wypożyczeń  
- Increment(), void – zwieksza liczbe wypozyczen o 1  

informacje:  
Klasa reprezentuje film z tytulem i liczba jego wypozyczen.  

autor: 20  
******************************************************
 */

class Film
{
    protected string title;
    protected int rentalsNumber;

    public Film()
    {
        title = "";
        rentalsNumber = 0;
    }

    public string Title
    {
        get { return title; }
        set
        {
            if (value.Length > 20)
                title = value.Substring(0, 20);
            else
                title = value;
        }
    }

    public int numberOfRentals()
    {
        return rentalsNumber;
    }

    public void Increment()
    {
        rentalsNumber++;
    }
}