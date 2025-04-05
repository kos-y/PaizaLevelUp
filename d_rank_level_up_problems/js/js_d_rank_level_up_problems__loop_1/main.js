const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

rl.on('line', (n) => {
    for (let i = 1; i <= Number(n); i++) {
        console.log(i);
    }
});
