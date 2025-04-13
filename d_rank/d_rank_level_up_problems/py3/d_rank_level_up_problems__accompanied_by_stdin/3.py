# coding: utf-8
a, b, c = map(int, input().split())

n = 0
n += a
n *= b
n %= c
print(n)
