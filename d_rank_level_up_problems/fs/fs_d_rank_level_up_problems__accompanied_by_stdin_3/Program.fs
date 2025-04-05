let vs = stdin.ReadLine().Split()
let a = int vs.[0]
let b = int vs.[1]
let c = int vs.[2]

let mutable n = 0
n <- n + a
n <- n * b
n <- n % c
printfn "%d" n
