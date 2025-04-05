let vs = stdin.ReadLine().Split()
let a = int vs.[0]
let b = int vs.[1]
let c = int vs.[2]

printfn (if a * b <= c then "YES" else "NO")
