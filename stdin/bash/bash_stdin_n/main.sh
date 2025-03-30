#!/bin/bash

# 単語数の入力
read count

# 文字列の入力
read line

# 文字列を半角スペース区切りで分割
IFS=' ' read -r -a words <<< $line

# 分割された単語ごとに出力
for word in ${words[@]} ; do
    echo $word
done
