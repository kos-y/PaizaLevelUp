using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] ab = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(ab[0] + ab[1]);
    }
}