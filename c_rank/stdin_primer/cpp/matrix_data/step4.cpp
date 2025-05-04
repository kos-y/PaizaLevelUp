// Paiza 問題集 標準入力メニュー N 行 M 列の整数の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_step4
#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int a;

            cin >> a;
            cout << a;
            if (j < m) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}