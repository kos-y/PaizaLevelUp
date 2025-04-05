open System

module Const =
    let A = 202
    let B = 134
    let C = 107

let v = (Const.A + Const.B) * Const.C
printfn "%d" (int (Math.Pow(float v, 2.0)))
