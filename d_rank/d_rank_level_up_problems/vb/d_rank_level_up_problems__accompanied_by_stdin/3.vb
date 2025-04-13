Imports System

Public Class Program
    Shared Sub Main()
        Dim vs() As String = Console.ReadLine().Split()
        Dim a As Integer = Integer.Parse(vs(0))
        Dim b As Integer = Integer.Parse(vs(1))
        Dim c As Integer = Integer.Parse(vs(2))

        Dim n As Integer = 0
        n += a
        n *= b
        n = n Mod c
        Console.WriteLine(n)
    End Sub
End Class
