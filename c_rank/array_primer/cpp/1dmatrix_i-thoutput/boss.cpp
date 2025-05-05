// Paiza 問題集 配列メニュー 【次元配列の入出力】i番目の出力 Boss C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_i-thoutput_boss
#include <iostream>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int a;

        cin >> a;
        if (i == k) {
            cout << a << endl;
        }
    }
    
    return 0;
}