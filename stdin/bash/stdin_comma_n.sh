#!/bin/bash

# 単語数の入力
read count

# 文字列の入力
read line

# 入力された文字列をカンマ区切りで分割
IFS=',' read -r -a words <<< $line

# 分割された単語単位で出力
for word in ${words[@]} ; do
    echo $word
done
