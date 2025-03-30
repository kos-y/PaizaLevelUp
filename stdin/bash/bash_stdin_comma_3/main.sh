#!/bin/bash

# １行入力
read line

# カンマ区切りで分割
IFS=',' read -r -a words <<< $line

# 分割された単語単位で出力
for word in ${words[@]} ; do
    echo $word
done
