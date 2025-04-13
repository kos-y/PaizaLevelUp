const lines = require('fs').readFileSync('/dev/stdin', 'utf8').split('\n');

lines.forEach(function(line) {
    console.log(line);
});
