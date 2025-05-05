// Paiza 問題集 配列メニュー i番目の出力 1 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_i-thoutput_step1
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 5, 4, 6, 2, 1, 7, 1, 5};
    int k;

    cin >> k;
    cout << a[k - 1] << endl;
    return 0;
}