// Paiza 問題集 文字列処理メニュー i 文字目の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/basic_step3
#include <iostream>
using namespace std;

int main()
{
    string s;
    int i;

    cin >> s;
    cin >> i;
    cout << s[i - 1] << endl;
    return 0;
}