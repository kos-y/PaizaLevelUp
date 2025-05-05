// Paiza 問題集 配列メニュー 列数の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step4
#include <iostream>
using namespace std;

int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {6, 5, 4, 3},
        {3, 1, 8, 1}
    };

    cout << size(a[0]) << endl;
    return 0;
}