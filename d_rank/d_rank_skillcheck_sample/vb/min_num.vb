Imports System

Public Class Program
    Shared Sub Main()
        Dim min As Integer = Integer.MaxValue

        For i As Integer = 1 To 5
            Dim n As Integer = Integer.Parse(Console.ReadLine())
            If n < min Then
                min = n
            End If
        Next

        Console.WriteLine(min)
    End Sub
End Class
