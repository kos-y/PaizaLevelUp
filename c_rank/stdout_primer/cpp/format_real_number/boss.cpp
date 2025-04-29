// Paiza 問題集 標準出力メニュー 標準出力メニュー 【実数をフォーマット指定して出力】複数の実数を出力 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__format_real_number_boss
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        double n;
        int m;

        cin >> n >> m;
        cout << fixed << setprecision(m) << n << endl;
    }

    return 0;
}