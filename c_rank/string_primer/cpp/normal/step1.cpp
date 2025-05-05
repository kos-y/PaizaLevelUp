// Paiza 問題集 文字列処理メニュー 部分文字列 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step1
#include <iostream>
using namespace std;

int main()
{
    string s;
    int i, j;

    cin >> s;
    cin >> i >> j;
    for (i--, j--; i <= j; i++) {
        cout << s[i];
    }

    cout << endl;
    return 0;
}