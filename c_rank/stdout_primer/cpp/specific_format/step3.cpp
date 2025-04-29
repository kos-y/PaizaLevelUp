// Paiza 問題集 標準出力メニュー 標準出力メニュー 九九表を罫線入りで出力 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_step3
#include <iostream>
#include <iomanip>
#include <numeric>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vv;

    for (int i = 1; i <= 9; i++) {
        vector<int> v;

        for (int j = 1; j <= 9; j++) {
            v.push_back(i * j);
        }

        vv.push_back(v);
    }

    vector<string> vs;
    for (vector<int> v : vv) {
        string n
            = accumulate(
                v.begin(), v.end(),
                string(),
                [](const string& a, int b) {
                  ostringstream oss;

                  oss << right << setw(2) << b;
                  return a.empty() ? oss.str() : a + " | " + oss.str();
                }
            );
        
        vs.push_back(n);
    }

    string o
        = accumulate(
            vs.begin(), vs.end(),
            string(),
            [](const string& a, string& b) {
                if (a.empty()) {
                    return b;
                } else {
                    ostringstream oss;

                    oss << a << endl << string(42, '=') << endl << b;
                    return oss.str();
                }
            }
        );

    cout << o << endl;
    return 0;
}