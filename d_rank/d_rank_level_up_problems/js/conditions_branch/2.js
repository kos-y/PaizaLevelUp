const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

rl.on('line', (n) => {
    console.log(Number(n) <= 100 ? 'YES' : 'NO');
});
