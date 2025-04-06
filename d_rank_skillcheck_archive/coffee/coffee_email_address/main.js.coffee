rl = require('readline').createInterface
    input: process.stdin
    output: null

lines = [];
rl.on 'line', (s) ->
    lines.push s

rl.on 'close', () ->
    console.log "#{lines[0]}@#{lines[1]}"
