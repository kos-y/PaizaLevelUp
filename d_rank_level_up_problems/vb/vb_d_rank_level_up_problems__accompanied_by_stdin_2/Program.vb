Imports System

Public Class Program
    Shared Sub Main()
        Dim vs() As String = Console.ReadLine().Split()
        Dim a As Integer = Integer.Parse(vs(0))
        Dim b As Integer = Integer.Parse(vs(1))

        Console.WriteLine((a - b) & " " & (a * b))
    End Sub
End Class
