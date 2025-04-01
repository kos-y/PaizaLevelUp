# /dev/stdinから入力を読み込んで半角スペース区切りで分割
words = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ")

# 分割した単語ごとに出力
words.forEach (word) -> console.log word
