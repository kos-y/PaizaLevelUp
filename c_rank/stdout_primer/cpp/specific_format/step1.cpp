// Paiza 問題集 標準出力メニュー 標準出力メニュー 2 つの文字列を出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_step1
#include <iostream>
using namespace std;

int main()
{
    string s, t;

    cin >> s;
    cin >> t;
    cout << s << " + " << t << " = " << s << t << endl;
    return 0;
}