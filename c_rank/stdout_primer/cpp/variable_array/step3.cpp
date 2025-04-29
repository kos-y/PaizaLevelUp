// Paiza 問題集 標準出力メニュー 直角三角形の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step3
#include <iostream>
using namespace std;

void cout_array(int e);

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout_array(i);
    }

    return 0;
}

void cout_array(int e)
{
    for (int i = 1; i <= e; i++) {
        cout << i;
        if (i < e) {
            cout << " ";
        }
    }

    cout << endl;
}