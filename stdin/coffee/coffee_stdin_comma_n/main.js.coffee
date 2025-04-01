# /dev/stdinから標準入力を受け取りLF区切りで分割
lines = require('fs').readFileSync('/dev/stdin', 'utf8').split('\n')

# 分割した行ごとにループ
lines.forEach (line, index) ->
    # ２行目以降の場合はカンマ区切りで分割して単語単位で出力
    if index > 0
        words = line.split(',')
        words.forEach (word) -> console.log(word)
