// Paiza 問題集 標準出力メニュー 大きな数値を 3 けたごとにカンマ区切りで出力 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step6
#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;

    string r;
    int c = 0;
    for (reverse_iterator<string::iterator> it = n.rbegin(); it != n.rend(); ++it) {
        r += *it;
        if (++c % 3 == 0 && (it + 1) != n.rend()) {
            r += ',';
        }
    }

    reverse(r.begin(), r.end());
    cout << r << endl;
    return 0;
}