const rl = require('readline').createInterface({
    input: process.stdin,
    output: null
});

rl.on('line', (s) => {
    const [A, B, C] = s.split(' ').map(Number);
    console.log(A * B <= C ? 'YES' : 'NO');
});
