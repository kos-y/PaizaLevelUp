// Paiza 問題集 配列メニュー 全要素の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_output_step2
#include <iostream>
using namespace std;

int main()
{
    int v[] = {5, 1, 3, 4, 5, 12, 6, 8, 1, 3};

    for (int i : v) {
        cout << i << endl;
    }
    
    return 0;
}