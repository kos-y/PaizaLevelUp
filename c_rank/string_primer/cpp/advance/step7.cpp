// Paiza 問題集 文字列処理メニュー 表記の訂正 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step7
#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string s;
    cin >> s;

    s = regex_replace(s, regex("^0+(?!\\.)"), "");

    size_t dot_pos = s.find('.');
    if (dot_pos != string::npos) {
        s = s.substr(0, dot_pos + 1) + regex_replace(s.substr(dot_pos + 1), regex("\\."), "");
        
        while (!s.empty() && s.back() == '0') {
            s.pop_back();
        }

        if (s.back() == '.') {
            s.pop_back();
        }
    }

    cout << s << endl;
    return 0;
}
