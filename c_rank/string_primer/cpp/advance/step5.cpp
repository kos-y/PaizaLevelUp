// Paiza 問題集 文字列処理メニュー 重複の削除 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step5
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_set<char> usc;
    for (char c : s) {
        if (usc.find(c) == usc.end()) {
            usc.insert(c);
            cout << c;
        }
    }

    cout << endl;
    return 0;
}