// Paiza 問題集 標準出力メニュー N 個の文字を半分ずつ出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step1
#include <iostream>
using namespace std;

void cout_array(int s, int e);

int main()
{
    int n;

    cin >> n;
    cout_array(1, n / 2);
    cout_array(n / 2 + 1, n);
    return 0;
}

void cout_array(int s, int e)
{
    for (int i = s; i <= e; i++) {
        cout << i;
        if (i < e) {
            cout << " ";
        }
    }

    cout << endl;
}