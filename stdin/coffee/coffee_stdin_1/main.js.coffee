# 標準入力用インターフェイスの作成
rl = require('readline').createInterface(
    input: process.stdin
    output: process.stdout
)

# １行入力してそのまま出力
rl.on 'line', (line) ->
    console.log line
