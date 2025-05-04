// Paiza 問題集 データセット選択メニュー 文字列の出現率 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step3
#include <iostream>
#include <numeric>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    map<string, int> dc;
    for (int i = 0; i < n; i++) {
        string s;

        cin >> s;
        dc[s]++;
    }

    for (const pair<string, int> p : dc) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}