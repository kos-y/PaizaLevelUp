rl = require('readline').createInterface
    input: process.stdin
    output: null

rl.on 'line', (n) ->
    for i in [1 .. Number n]
        console.log i
