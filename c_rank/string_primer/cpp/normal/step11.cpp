// Paiza 問題集 文字列処理メニュー 回文判定 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step11
#include <iostream>
using namespace std;

bool ispalindrome(string& s);

int main()
{
    string s;

    cin >> s;
    cout << (ispalindrome(s) ? "YES" : "NO") << endl;
    return 0;
}

bool ispalindrome(string& s)
{
    int l = s.length();

    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) {
            return false;
        }
    }

    return true;
}