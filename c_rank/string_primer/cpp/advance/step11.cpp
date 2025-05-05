// Paiza 問題集 文字列処理メニュー 巨大な数の足し算 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step11
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    string r;
    int up = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        int sv = s[i] - '0';
        int tv = t[i] - '0';

        int a = sv + tv + up;
        r.insert(r.begin(), (a % 10) + '0');
        up = a / 10;
    }

    if (up > 0) {
        r.insert(r.begin(), up + '0');
    }

    cout << r << endl;
    return 0;
}