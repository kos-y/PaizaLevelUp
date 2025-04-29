// Paiza 問題集 標準出力メニュー バーティカルライン区切りで 3 つの文字列を出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step2
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> ss;
    for (int i = 0; i < 3; i++) {
        string s;

        cin >> s;
        ss.push_back(s);
    }

    string o
        = accumulate(
            ss.begin(), ss.end(),
            string(),
            [](const string& a, string& b) {
                return a.empty() ? b : a + "|" + b;
            }
        );

    cout << o << endl;
    return 0;
}