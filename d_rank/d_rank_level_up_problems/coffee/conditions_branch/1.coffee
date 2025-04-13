rl = require('readline').createInterface
    input: process.stdin
    output: null

rl.on 'line', (s) ->
    console.log if s == 'paiza' then 'YES' else 'NO'
