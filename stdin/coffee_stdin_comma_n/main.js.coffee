lines = require('fs').readFileSync('/dev/stdin', 'utf8').split('\n')
lines.forEach (line, index) ->
    if index > 0
        words = line.split(',')
        words.forEach (word) -> console.log(word)
