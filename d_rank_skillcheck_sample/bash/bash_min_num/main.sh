#!/bin/bash
min=101
for i in {1..5}
do
    read n
    if [ $n -lt $min ]; then
        min=$n
    fi
done
echo $min
