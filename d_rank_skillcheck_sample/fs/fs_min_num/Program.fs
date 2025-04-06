open System

let vs = [ for _ in 1..5 -> int (Console.ReadLine()) ]
printfn "%d" (List.min vs)
