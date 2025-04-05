[A, B, C] = require('fs').readFileSync('/dev/stdin', 'utf8').split(' ').map Number

N = 0;
N += A;
N *= B;
N %= C;
console.log N
