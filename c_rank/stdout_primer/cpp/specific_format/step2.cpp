// Paiza 問題集 標準出力メニュー 標準出力メニュー 文字列と N 個の整数の出力 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_step2
#include <iostream>
#include <numeric>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<string> v;
    for (int i = 0; i < n; i++) {
        ostringstream oss;
        oss << "(" << a << ", " << b << ")";
        v.push_back(oss.str());
    }

    string o
        = accumulate(
            v.begin(), v.end(),
            string(),
            [](const string& a, string& b) {
                return a.empty() ? b : a + ", " + b;
            }
        );

    cout << o << endl;
    return 0;
}