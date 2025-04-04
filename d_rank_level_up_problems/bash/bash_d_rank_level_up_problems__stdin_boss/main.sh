#!/bin/bash
IFS=' '
read -a s
for t in ${s[@]}; do
    echo $t
done
