# Paiza 問題集 Dランク・実力確認問題セット1 ダウンロード(Easy) Python 3編（paizaランク D 相当）
# https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__1
# coding: utf-8
s, a, t = map(int, input().split())

sa = s / a
ta = t / a
print(int((ta / sa) * 100))
