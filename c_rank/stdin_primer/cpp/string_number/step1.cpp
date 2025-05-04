// Paiza 問題集 標準入力メニュー 改行区切りでの N 個の文字列の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__string_number_step1
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;

        cin >> s;
        cout << s << endl;
    }

    return 0;
}