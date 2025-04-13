#!/bin/bash

#１行入力
read line

# 入力された文字列を半角スペース区切りで分割
IFS=' ' read -r -a words <<< $line

# 分割された文字列毎に出力
for word in ${words[@]} ; do
    echo $word
done
