lines = require('fs').readFileSync('/dev/stdin', 'utf8').split '\n'
lines.forEach (line) ->
    console.log line
