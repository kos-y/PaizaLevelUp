// Paiza 問題集 標準入力メニュー 3 行 3 列の整数の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_step1
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int a;

            cin >> a;
            cout << a;
            if (j < 3) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}