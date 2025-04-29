// Paiza 問題集 標準出力メニュー 標準出力メニュー 1 つの実数を出力 4 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__format_real_number_step4
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    int m;

    cin >> n >> m;
    cout << fixed << setprecision(m) << n << endl;
    return 0;
}