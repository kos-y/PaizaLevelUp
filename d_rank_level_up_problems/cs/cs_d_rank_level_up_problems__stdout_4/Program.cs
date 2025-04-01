using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        new List<byte>() { 8, 1, 3 }.ForEach(v => Console.WriteLine(v));
    }
}
