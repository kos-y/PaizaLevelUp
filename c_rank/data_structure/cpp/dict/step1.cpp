// Paiza 問題集 データセット選択メニュー 数値の出現率 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step1
#include <iostream>
#include <numeric>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, int> dc;
    for (int i = 0; i <= 9; i++) {
        dc[i] = 0;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        dc[a]++;
    }

    string o
        = accumulate(
            dc.begin(), dc.end(),
            string(),
            [](const string& a, pair<int, int> b) {
                return a.empty() ? to_string(b.second) : a + " " + to_string(b.second);
            }
        );
        
    cout << o << endl;
    return 0;
}