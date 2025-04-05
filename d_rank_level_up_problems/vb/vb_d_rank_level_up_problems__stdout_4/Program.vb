Imports System

Public Class Program
    Shared Sub Main()
        Dim vs() As Integer = {8, 1, 3}

        For Each v As Integer In vs
            Console.WriteLine(v)
        Next
    End Sub
End Class