// Paiza 問題集 標準出力メニュー 半角スペースとバーティカルライン区切りで 10 個出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step5
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> ns;
    for (int i = 0; i < 10; i++) {
        int n;

        cin >> n;
        ns.push_back(n);
    }

    string o
        = accumulate(
            ns.begin(), ns.end(),
            string(),
            [](const string& a, int b) {
                return a.empty() ? to_string(b) : a + " | " + to_string(b);
            }
        );

    cout << o << endl;
    return 0;
}