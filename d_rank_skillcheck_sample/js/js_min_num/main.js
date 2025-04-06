const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

let ns = [];
rl.on('line', (s) => {
    ns.push(Number(s));
}).on('close', () => {
    console.log(Math.min(...ns));
    rl.close();
});
