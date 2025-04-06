rl = require('readline').createInterface
    input: process.stdin,
    output: null

ns = [];
rl.on 'line', (s) ->
    ns.push(Number(s));

rl.on 'close', () ->
    console.log Math.min.apply(null, ns)
    rl.close()
