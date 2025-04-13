using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] v = Console.ReadLine()
                         .Split()
                         .Select(int.Parse)
                         .ToArray();

        Console.WriteLine($"{v[0] - v[1]} {v[0] * v[1]}");
    }
}