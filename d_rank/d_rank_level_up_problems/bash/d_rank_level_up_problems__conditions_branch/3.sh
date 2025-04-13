#!/bin/bash
read a b c
if [ $(($a * $b)) -le $c ]; then
    echo 'YES'
else
    echo 'NO'
fi
