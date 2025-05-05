// Paiza 問題集 配列メニュー 行数の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step3
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {8, 1, 3}
    };

    cout << size(a) << endl;
    return 0;
}