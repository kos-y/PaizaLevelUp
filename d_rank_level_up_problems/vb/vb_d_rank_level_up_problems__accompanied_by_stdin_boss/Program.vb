Imports System

Public Class Program
    Shared Sub Main()
        Dim vs() As String = Console.ReadLine().Split()
        Dim a As Integer = Integer.Parse(vs(0))
        Dim b As Integer = Integer.Parse(vs(1))
        Dim c As Integer = Integer.Parse(vs(2))

        Console.WriteLine(a - b + c)
    End Sub
End Class
