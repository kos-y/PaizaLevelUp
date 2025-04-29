// Paiza 問題集 標準出力メニュー 数値を異なる長さで 2 行出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step2
#include <iostream>
using namespace std;

void cout_array(int e);

int main()
{
    int n, m;

    cin >> n >> m;
    cout_array(n);
    cout_array(m);
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