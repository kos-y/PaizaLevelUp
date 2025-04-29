// Paiza 問題集 標準出力メニュー 【n * n の 2 次元配列の表示】N * N の九九表の出力 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__2dim_array_boss
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j;
            if (j < n) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}