// Paiza 問題集 文字列処理メニュー 文字列の挿入 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step2
#include <iostream>
using namespace std;

int main()
{
    string s, t;
    int n;

    cin >> s;
    cin >> t;
    cin >> n;
    cout << s.insert(n, t) << endl;
    return 0;
}