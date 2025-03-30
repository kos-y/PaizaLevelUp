readline = require 'readline'

# Readlineインターフェイスを作成
rl = readline.createInterface(
    input: process.stdin
    output: process.stdout
)

# 標準入力を処理
rl.on 'line', (line) ->
    console.log line
