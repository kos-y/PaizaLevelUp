open System

Console.ReadLine()
|> ignore

Console.ReadLine()
|> fun input -> input.Split(',')
|> Array.iter Console.WriteLine
