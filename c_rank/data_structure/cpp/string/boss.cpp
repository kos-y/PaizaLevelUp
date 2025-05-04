// Paiza 問題集 データセット選択メニュー 文字列の配列 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__string_boss
#include <iostream>
using namespace std;

int main()
{
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    cin.ignore();

    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;

        if (i == r - 1) {
            cout << (s[c - 1] == '#' ? "Yes" : "No") << endl;
        }
    }

    return 0;
}