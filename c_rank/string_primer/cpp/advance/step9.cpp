// Paiza 問題集 文字列処理メニュー 数式の計算（ 1 桁） C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step9
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0, v = -1;
    char o = '\0';
    for (size_t i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            if (v == -1) {
                v = s[i] - '0';
            } else {
                v *= 10;
                v += s[i] - '0';
            }

            if (i == s.size() - 1 || !isdigit(s[i + 1])) {
                if (o == '\0') {
                    sum = v;
                } else {
                    switch (o) {
                        case '+':
                            sum += v;
                            break;
                        case '-':
                            sum -= v;
                            break;
                    }
                }
    
                v = -1;
            }
        } else {
            o = s[i];
        }
    }

    cout << sum << endl;
    return 0;
}