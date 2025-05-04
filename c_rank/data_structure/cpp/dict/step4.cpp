// Paiza 問題集 データセット選択メニュー 価格の算出 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step4
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, int> dab;
    for (int i = 0; i < n; i++) {
        string a;
        int b;

        cin >> a >> b;
        dab[a] = b;
    }

    for (int i = 0; i < m; i++) {
        string s;

        cin >> s;
        cout << (dab.find(s) != dab.end() ? dab[s] : -1) << endl;
    }

    return 0;
}