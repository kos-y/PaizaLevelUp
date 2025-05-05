// Paiza 問題集 文字列処理メニュー パスワード作成 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step6
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;

    unordered_map<int, char> pws;
    pws.reserve(q);
    for (int i = 0; i < q; i++) {
        int tn;
        char tc;

        cin >> tn >> tc;
        pws.emplace(tn, tc);
    }

    char c;
    cin >> c;

    string s;
    for (int i = 1; i <= n; i++) {
        if (pws.find(i) != pws.end()) {
            s += pws[i];
        } else {
            s += c;
        }
    }

    cout << s << endl;

    return 0;
}
