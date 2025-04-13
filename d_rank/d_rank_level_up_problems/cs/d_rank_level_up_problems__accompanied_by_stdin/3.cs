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

        int n = 0;
        n += v[0];
        n *= v[1];
        n %= v[2];
        Console.WriteLine(n);
    }
}
