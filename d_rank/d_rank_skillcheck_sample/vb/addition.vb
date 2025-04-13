Imports System

Public Class Program
    Shared Sub Main()
        Dim ab As String() = Console.ReadLine().Split()
        Dim a As Integer = Integer.Parse(ab(0))
        Dim b As Integer = Integer.Parse(ab(1))

        Console.WriteLine(a + b)
    End Sub
End Class
