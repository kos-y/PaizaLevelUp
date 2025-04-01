using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        Enumerable.Range(1, n)
                  .ToList()
                  .ForEach(v => Console.WriteLine(v));
    }
}