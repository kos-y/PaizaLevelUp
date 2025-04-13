using System;
using System.Linq;

class Program
{
    static void Main()
    {
        Console.WriteLine(Enumerable.Range(0, 5).Select(_ => int.Parse(Console.ReadLine())).Min());
    }
}