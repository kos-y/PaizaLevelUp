// Paiza 問題集 標準出力メニュー 3 つの数値を出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__space_oneline_step2
#include <iostream>
#include <numeric>
#include <string>
using namespace std;

int main()
{
    int vs[] = {8, 1, 3};
    string s
        = accumulate(
            begin(vs), end(vs),
            string(),
            [](const string& a, int b) {
                return a.empty() ? to_string(b) : a + " " + to_string(b);
            }
        );

    cout << s << endl;
    return 0;
}