ss = require('fs').readFileSync('/dev/stdin', 'utf8').split ' '
for s in ss 
    console.log s
