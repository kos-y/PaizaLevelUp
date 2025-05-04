// Paiza 問題集 論理演算メニュー NOR 演算の基本 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step6
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    cout << ((~(a | b)) & 0x1) << endl;
    return 0;
}