// Paiza 問題集 文字列処理メニュー 数式の計算（ 1 桁） C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step8
#include <cctype>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int sum = s[0] - '0';
    char o = s[1];
    for (size_t i = 2; i < s.size(); i++) {
        if (isdigit(s[i])) {
            int n = s[i] - '0';

            switch (o) {
                case '+':
                    sum += n;
                    break;

                case '-':
                    sum -= n;
                    break;

                default:
                    break;
            }
        } else {
            o = s[i];
        }
    }

    cout << sum << endl;
    return 0;
}