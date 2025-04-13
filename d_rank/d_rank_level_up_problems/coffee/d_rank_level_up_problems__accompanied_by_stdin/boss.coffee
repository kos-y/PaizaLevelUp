[A, B, C] = require('fs').readFileSync('/dev/stdin', 'utf8').split(' ').map Number
console.log A - B + C
