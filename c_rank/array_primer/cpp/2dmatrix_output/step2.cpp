// Paiza 問題集 配列メニュー 全要素の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__2dmatrix_output_step2
#include <iostream>
using namespace std;

int main()
{
    int a[2][6] = {
        {6, 5, 4, 3, 2, 1},
        {3, 1, 8, 8, 1, 3}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << a[i][j];
            if (j < 5) {
                cout << " ";
            }
        }

        cout << endl;
    }
    
    return 0;
}