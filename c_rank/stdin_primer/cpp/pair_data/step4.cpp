// Paiza 問題集 標準入力メニュー 文字列と整数の組の入力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdin_primer/stdin_primer__pair_data_step4
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int a;

        cin >> s >> a;
        cin.ignore();
        cout << s << " " << a << endl;
    }

    return 0;
}