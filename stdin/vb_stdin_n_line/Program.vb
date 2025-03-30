Imports System
Imports System.Linq

Public Class Program
    Shared Function Main() As Integer
        Dim lineCount As Integer = Integer.Parse(Console.ReadLine())
        Dim lines(lineCount - 1) As String

        For i As Integer = 0 To lineCount - 1
            lines(i) = Console.ReadLine()
        Next

        For Each line As String In lines
            Console.WriteLine(line)
        Next

        Return 0
    End Function
End Class
