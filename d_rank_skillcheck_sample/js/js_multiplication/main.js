const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

let lines = [];
rl.on('line', (s) => {
    lines.push(Number(s));
}).on('close', () => {
    console.log(lines.reduce((a, b) => a * b, 1));
});
