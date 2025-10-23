using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace egzamin
{
    internal class Task1
    {
        public void Task()
        {

            Console.WriteLine("Wpisz a:");
            int a = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Wpisz b:");
            int b = Convert.ToInt32(Console.ReadLine());

            int result;

            if (!(a < 0) && !(b < 0))
            {
                if (a != b)
                {
                    if (a > b)
                    {
                        result = a /= a - b;
                        Console.WriteLine("Wynik: " + result);
                    }
                    else
                    {
                        result = b /= b - a;
                        Console.WriteLine("Wynik: " + result);
                    }
                }
                else
                {
                    Console.WriteLine("Liczba a: " + a);
                }
            }
        } 
    }
}
