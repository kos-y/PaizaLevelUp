// Paiza 問題集 配列メニュー i 行目 j 列目の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step6
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {8, 1, 3},
        {10, 100, 1}
    };

    cout << a[1][2] << endl;
    return 0;
}