#!/bin/bash
read line

IFS=' ' read -r -a words <<< $line

for word in ${words[@]} ; do
    echo $word
done
