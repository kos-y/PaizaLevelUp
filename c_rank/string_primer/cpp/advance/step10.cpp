// Paiza 問題集 文字列処理メニュー 巨大な数の足し算(繰り上がりなし) C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step10
#include <iostream>
using namespace std;

int main()
{
    string s, t, a;
    cin >> s;
    cin >> t;

    a.resize(s.size());
    for (size_t i = 0; i < s.size(); i++) {
        a[i] = (s[i] - '0') + (t[i] - '0') + '0';
    }

    cout << a << endl;
    return 0;
}