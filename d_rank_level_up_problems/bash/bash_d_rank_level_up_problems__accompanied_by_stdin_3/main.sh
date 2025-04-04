#!/bin/bash
read a b c
n=0
n=$(($n + $a))
n=$(($n * $b))
n=$(($n % $c))
echo $n
