using System;
using System.Linq;

class Program
{
    static void Main()
    {
        const int LineCount = 3;

        Enumerable.Range(0, LineCount)
                  .Select(_ => Console.ReadLine())
                  .ToList()
                  .ForEach(line => Console.WriteLine(line));
    }
}