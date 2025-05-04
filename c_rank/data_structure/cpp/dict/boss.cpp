// Paiza 問題集 データセット選択メニュー 商品の検索 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_boss
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    map<string, int> ds;
    for (int i = 1; i <= n; i++) {
        string s;

        cin >> s;
        if (ds.find(s) == ds.end()) {
            ds[s] = i;
        }
    }

    for (int i = 0; i < q; i++) {
        string t;

        cin >> t;
        cout << (ds.find(t) != ds.end() ? ds[t] : -1) << endl;
    }

    return 0;
}