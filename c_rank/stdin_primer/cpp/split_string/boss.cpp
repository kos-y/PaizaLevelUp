// Paiza 問題集 標準入力メニュー 【半角スペース区切りでの文字列の分割】5 つの文字列の半角スペース区切りでの分割 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_string_boss
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    istringstream iss("one two three four five");
    string s;
    
    while (iss >> s) {
        cout << s << endl;
    }

    return 0;
}