// Paiza 問題集 標準出力メニュー 10 個の数値を出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__space_oneline_step4
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> vs(10);
    iota(vs.begin(), vs.end(), 1);

    string s
        = accumulate(
            vs.begin(), vs.end(),
            string(),
            [](const string& a, int b) {
                return a.empty() ? to_string(b) : a + " " + to_string(b);
            }
        );

    cout << s << endl;
    return 0;
}