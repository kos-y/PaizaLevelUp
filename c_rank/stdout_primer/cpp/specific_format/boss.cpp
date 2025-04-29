// Paiza 問題集 標準出力メニュー 標準出力メニュー 【出力形式を指定して出力】ペアの数値の入った表を罫線入りで出力 2 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_format_boss
#include <iostream>
#include <iomanip>
#include <numeric>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int h, w, a, b;
    cin >> h >> w >> a >> b;

    vector<vector<string>> vv;
    for (int i = 1; i <= h; i++) {
        vector<string> v;

        for (int j = 1; j <= w; j++) {
            ostringstream oss;

            oss << "(" << right << setw(9) << a << ", " << right << setw(9) << b << ")";
            v.push_back(oss.str());
        }

        vv.push_back(v);
    }

    vector<string> vs;
    for (vector<string> v : vv) {
        string n
            = accumulate(
                v.begin(), v.end(),
                string(),
                [](const string& a, string b) {
                  return a.empty() ? b : a + " | " + b;
                }
            );
        
        vs.push_back(n);
    }

    int len = vs[0].size();

    string o
        = accumulate(
            vs.begin(), vs.end(),
            string(),
            [&](const string& a, string& b) {
                if (a.empty()) {
                    return b;
                } else {
                    ostringstream oss;

                    oss << a << endl << string(len, '=') << endl << b;
                    return oss.str();
                }
            }
        );

    cout << o << endl;
    return 0;
}