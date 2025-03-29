using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int lineCount = int.Parse(Console.ReadLine());

        Enumerable.Range(0, lineCount)
                   .Select(_ => Console.ReadLine())
                   .ToList()
                   .ForEach(line => Console.WriteLine(line));
    }
}