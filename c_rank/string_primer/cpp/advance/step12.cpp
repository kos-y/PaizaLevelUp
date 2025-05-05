// Paiza 問題集 文字列処理メニュー 巨大な数のかけ算 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step12
#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    string a(s.size() + t.size(), '0');
    for (int j = t.size() - 1; j >= 0; j--) {
        for (int i = s.size() - 1; i >= 0; i--) {
            int k = i + j + 1;
            int tmp = ((s[i] - '0') * (t[j] - '0')) + (a[k] - '0');
            a[k] = (tmp % 10) + '0';
            int c = tmp / 10;
            while (c != 0) {
                tmp = (a[--k] - '0') + c;
                a[k] = (tmp % 10) + '0';
                c = tmp / 10;
            }
        }
    }

    int i;
    for (i = 0; a[i] == '0'; i++);
    if (i == a.size()) {
        cout << 0;
    } else {
        for (; a.c_str()[i] != '\0'; i++) {
            cout << a[i];
        }
    }

    cout << endl;
    return 0;
}