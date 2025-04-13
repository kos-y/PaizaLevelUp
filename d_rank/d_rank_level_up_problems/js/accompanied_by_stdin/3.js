const [A, B, C] = require('fs').readFileSync('/dev/stdin', 'utf8').split(' ').map(Number);

let n = 0;
n += A;
n *= B;
n %= C;
console.log(n);
