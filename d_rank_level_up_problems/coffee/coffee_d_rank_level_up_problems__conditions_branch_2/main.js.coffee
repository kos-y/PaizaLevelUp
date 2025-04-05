rl = require('readline').createInterface
    input: process.stdin,
    output: null

rl.on 'line', (n) ->
    console.log if Number(n) <= 100 then 'YES' else 'NO'
