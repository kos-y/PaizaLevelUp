open System

let lineCount = Console.ReadLine() |> int
[ for _ in 1 .. lineCount -> Console.ReadLine() ]
|> List.iter Console.WriteLine
