// Paiza 問題集 標準入力メニュー 【N 行 M 列のデータの入力】行ごとに要素数の異なる整数列の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__matrix_data_boss
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        int m;

        cin >> m;
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