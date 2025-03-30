open System

Console.ReadLine()
|> fun input -> input.Split(',')
|> Array.iter Console.WriteLine
