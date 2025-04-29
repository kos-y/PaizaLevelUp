// Paiza 問題集 標準出力メニュー 標準出力メニュー 1 つの実数を出力 2 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__format_real_number_step2
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;

    cin >> n;
    cout << fixed << setprecision(3) << n << endl;
    return 0;
}