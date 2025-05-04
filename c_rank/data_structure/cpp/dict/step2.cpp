// Paiza 問題集 データセット選択メニュー 英小文字の出現率 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step2
#include <iostream>
#include <numeric>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<char, int> dc;
    for (char c = 'a'; c <= 'z'; c++) {
        dc[c] = 0;
    }

    int n;
    cin >> n;
    cin.ignore();

    string s;
    cin >> s;
    for (char c : s) {
        dc[c]++;
    }

    string o
        = accumulate(
            dc.begin(), dc.end(),
            string(),
            [](const string& a, pair<char, int> b) {
                return a.empty() ? to_string(b.second) : a + " " + to_string(b.second);
            }
        );
        
    cout << o << endl;
    return 0;
}