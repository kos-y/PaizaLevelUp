// Paiza 問題集 標準出力メニュー 標準出力メニュー 数値をゼロ埋めで出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_step2
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << setfill('0') << setw(3) << n << endl;
    return 0;
}