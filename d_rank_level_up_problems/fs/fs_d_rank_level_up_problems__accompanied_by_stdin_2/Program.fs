let ab = stdin.ReadLine().Split()
let a = int ab.[0]
let b = int ab.[1]

printfn "%d %d" (a - b) (a * b)
