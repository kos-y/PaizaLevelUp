words = require('fs').readFileSync('/dev/stdin', 'utf8').split(",")
words.forEach (word) -> console.log word