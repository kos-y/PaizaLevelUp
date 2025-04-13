const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

let lines = [];
rl.on('line', (s) => {
    lines.push(s);
}).on('close', () => {
    console.log(`${lines[0]}@${lines[1]}`);
});
