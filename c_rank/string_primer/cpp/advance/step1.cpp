// Paiza 問題集 文字列処理メニュー 文字列の分割 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step1
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;

    cin >> s;
    stringstream ss(s);
    string si;
    while (getline(ss, si, ',')) {
        cout << si << endl;
    }
    
    return 0;
}