rl = require('readline').createInterface
    input: process.stdin
    output: null

lines = []
rl.on 'line', (s) ->
    lines.push Number(s)

rl.on 'close', () ->
    console.log lines.reduce ((a, b) -> a * b), 1
