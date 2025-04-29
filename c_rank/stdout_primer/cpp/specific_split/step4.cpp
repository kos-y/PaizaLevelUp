// Paiza 問題集 標準出力メニュー カンマ区切りで 10 個出力 2 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step4
#include <iostream>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<int> ns;
    int n;
    while (iss >> n) {
        ns.push_back(n);
    }

    string o
        = accumulate(
            ns.begin(), ns.end(),
            string(),
            [](const string& a, int b) {
                return a.empty() ? to_string(b) : a + "," + to_string(b);
            }
        );

    cout << o << endl;
    return 0;
}