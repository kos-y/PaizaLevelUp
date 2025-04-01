using System;
using System.Linq;

class Program
{
    static void Main()
    {
        Enumerable.Range(1, 100)
                  .ToList()
                  .ForEach(v => Console.WriteLine(FizzBuzz(v)));
    }

    static string FizzBuzz(int n)
    {
        if (n % 3 == 0 && n % 5 == 0) {
            return "FizzBuzz";
        }
        else if (n % 3 == 0) {
            return "Fizz";
        }
        else if (n % 5 == 0) {
            return "Buzz";
        }
        else {
            return $"{n}";
        }
    }
}