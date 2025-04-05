Imports System

Public Class Program
    Shared Sub Main()
        Dim n As Integer = Integer.Parse(Console.ReadLine())

        Console.WriteLine(If(n <= 100, "YES", "NO"))
    End Sub
End Class
