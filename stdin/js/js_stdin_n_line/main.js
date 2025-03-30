const rl = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

const lines = [];
rl.on('line', (line) => {
    lines.push(line);
}).on('close', () => {
    const lineCount = parseInt(lines[0]);

    lines.slice(1, lineCount + 1).forEach(line => console.log(line));
});
