// Paiza 問題集 標準出力メニュー 標準出力メニュー 【出力幅を指定して出力】N 個の数値を M けた半角スペース埋めで出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_boss
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        cout << right << setw(m) << a << endl;
    }

    return 0;
}