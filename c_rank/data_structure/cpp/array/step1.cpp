// Paiza 問題集 データセット選択メニュー ランダムアクセス C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_step1
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        int a;

        cin >> a;
        if (i == m) {
            cout << a << endl;
        }
    }

    return 0;
}