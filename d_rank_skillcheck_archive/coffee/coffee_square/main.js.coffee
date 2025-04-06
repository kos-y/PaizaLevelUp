rl = require('readline').createInterface
    input: process.stdin
    output: null

rl.on 'line', (s) ->
    n = Number s
    console.log '*'.repeat(n)
