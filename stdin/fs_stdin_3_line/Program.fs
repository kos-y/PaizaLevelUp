open System

let lineCount = 3

[0 .. lineCount - 1]
|> List.map(fun _ -> Console.ReadLine())
|> List.iter Console.WriteLine
