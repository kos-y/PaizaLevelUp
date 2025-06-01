// Paiza 問題集 Dランク・実力確認問題セット1 ダウンロード(Easy) C#編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__1
using System;
using System.Linq;

class Program
{
    public static void Main()
    {
        int[] sat = Console.ReadLine().Split().Select(int.Parse).ToArray();

        double ta = sat[2] * sat[1];
        double sa = sat[0] * sat[1];
        Console.WriteLine((int)((ta / sa) * 100.0));
    }
}