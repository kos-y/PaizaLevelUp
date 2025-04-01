# 標準入出力用インターフェイスの作成
rl = require('readline').createInterface
    input: process.stdin
    output: process.stdout

# 入力内容を受け取り、行ごとに管理
lines = []
rl.on 'line', (line) =>
    lines.push(line)

# 標準入力が完了
rl.on 'close', ->
    # 行数(１行目)を数値に変換
    lineCount = parseInt(lines[0])

    # 2行目以降をそのまま出力
    lines[1..lineCount].forEach (line) ->
        console.log(line)
