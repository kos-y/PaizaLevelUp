Imports System

Public Class Program
    Shared Sub Main()
        Dim ss() As String = Console.ReadLine().Split()

        For Each s As String In ss
            Console.WriteLine(s)
        Next
    End Sub
End Class
