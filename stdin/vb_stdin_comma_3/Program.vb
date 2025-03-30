Imports System
Imports System.Linq

Public Class Program
    Shared Function Main() As Integer
        Dim words() As String = Console.ReadLine().Split(",")

        For Each word As String In words
            Console.WriteLine(word)
        Next

        Return 0
    End Function
End Class