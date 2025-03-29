rl = require('readline').createInterface
    input: process.stdin
    output: process.stdout

lines = []
rl.on 'line', (line) =>
    lines.push(line)

rl.on 'close', ->
    lineCount = parseInt(lines[0])
    lines[1..lineCount].forEach (line) ->
        console.log(line)
