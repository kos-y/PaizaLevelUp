using System;
using System.Linq;

class Program
{
    static void Main()
    {
        Console.ReadLine()
               .Split()
               .ToList()
               .ForEach(s => Console.WriteLine(s));
    }
}
