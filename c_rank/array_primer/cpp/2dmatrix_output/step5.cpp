// Paiza 問題集 配列メニュー 各行の要素数の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step5
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a;
    for (int i = 0; i < 3; i++) {
        a.push_back(vector<int>());
    }

    a[0].push_back(1);
    a[1].push_back(2);
    a[1].push_back(3);
    a[2].push_back(4);
    a[2].push_back(5);
    a[2].push_back(6);

    for (int i = 0; i < 3; i++) {
        cout << a[i].size() << endl;
    }

    return 0;
}