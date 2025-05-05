// Paiza 問題集 配列メニュー 要素数の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step1
#include <iostream>
using namespace std;

int main()
{
    int a[2][6] = {
        {1, 2, 3, 4, 5, 6},
        {8, 1, 3, 3, 1, 8}
    };

    cout << size(a) * size(a[0]) << endl;
    return 0;
}