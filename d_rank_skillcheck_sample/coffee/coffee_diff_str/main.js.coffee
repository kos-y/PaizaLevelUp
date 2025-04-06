rl = require('readline').createInterface
    input: process.stdin
    output: null

lines = [];
rl.on 'line', (s) ->
    lines.push(s);

rl.on 'close', () ->
    console.log if lines[0] is lines[1] then "OK" else "NG"
    rl.close()
