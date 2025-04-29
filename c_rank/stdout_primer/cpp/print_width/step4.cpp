// Paiza 問題集 標準出力メニュー 標準出力メニュー 値を M けた半角スペース埋めで出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__print_width_step4
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    cout << right << setw(m) << n << endl;
    return 0;
}