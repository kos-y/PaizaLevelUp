// Paiza 問題集 標準入力メニュー 2 つの文字列の半角スペース区切りでの分割 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__split_string_step1
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    istringstream iss("Hello paiza");
    string s;
    
    while (iss >> s) {
        cout << s << endl;
    }

    return 0;
}