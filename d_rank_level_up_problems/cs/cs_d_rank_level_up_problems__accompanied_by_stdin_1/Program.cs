using System;
using System.Linq;

class Program
{
    static void Main()
    {
        Enumerable.Range(0, 2)
                  .Select(_ => Console.ReadLine())
                  .ToList()
                  .ForEach(s => Console.WriteLine(s));
    }
}
