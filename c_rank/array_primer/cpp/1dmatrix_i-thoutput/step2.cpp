// Paiza 問題集 配列メニュー i番目の出力 2 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_i-thoutput_step2
#include <iostream>
using namespace std;

int main()
{
    int k;

    cin >> k;
    for (int i = 1; i <= 10; i++) {
        int a;

        cin >> a;
        if (i == k) {
            cout << a << endl;
        }
    }
    
    return 0;
}