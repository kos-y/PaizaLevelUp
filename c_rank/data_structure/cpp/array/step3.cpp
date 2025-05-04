// Paiza 問題集 データセット選択メニュー 最大値と最小値 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_step3
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << max({a, b, c}) - min({a, b, c}) << endl;
    return 0;
}