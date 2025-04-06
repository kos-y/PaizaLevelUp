rl = require('readline').createInterface
    input: process.stdin
    output: null

rl.on 'line', (s) ->
    [a, b] = s.split(' ').map Number
    console.log a + b
