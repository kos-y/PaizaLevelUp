const ss = require('fs').readFileSync('/dev/stdin', 'utf8').split(' ');
for (const s of ss) {
    console.log(s);
}
