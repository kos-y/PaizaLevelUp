# 標準入出力インターフェイス作成
rl = require('readline').createInterface(
    input: process.stdin
    output: process.stdout
)

# 入力した内容をそのまま出力
rl.on 'line', (line) ->
    console.log line
