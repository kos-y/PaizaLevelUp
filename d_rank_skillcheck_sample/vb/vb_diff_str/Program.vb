Imports System

Public Class Program
    Shared Sub Main()
        Dim a As String = Console.ReadLine()
        Dim b As String = Console.ReadLine()

        Console.WriteLine(If(a = b, "OK", "NG"))
    End Sub
End Class
