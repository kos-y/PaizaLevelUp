// Paiza 問題集 標準出力メニュー 標準出力メニュー 複数の数値を半角スペース埋めで出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_step3
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;

        cin >> m;
        cout << right << setw(3) << m << endl;
    }

    return 0;
}