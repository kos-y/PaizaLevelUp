const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

rl.on('line', (s) => {
    console.log(s === 'paiza' ? 'YES' : 'NO');
});
