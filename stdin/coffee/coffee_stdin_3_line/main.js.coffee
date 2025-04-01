# /dev/stdinから読み込み、LF区切りで分割
lines = require('fs').readFileSync('/dev/stdin', 'utf8').split '\n'

# 分割した行ごとにループして内容を表示
lines.forEach (line) ->
    console.log line
