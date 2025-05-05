// Paiza 問題集 文字列処理メニュー 数値から文字列への変換 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/string_primer/normal_step5
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y, i;

    cin >> x;
    cin >> y;
    cin >> i;

    cout << to_string(x + y)[i - 1] << endl;
    return 0;
}