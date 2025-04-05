rl = require('readline').createInterface
    input: process.stdin
    output: null

rl.on 'line', (s) ->
    [A, B, C] = s.split(' ').map Number
    console.log if A * B <= C then 'YES' else 'NO'
