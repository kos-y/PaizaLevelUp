// Paiza 問題集 論理演算メニュー 否定( NOT )の基本 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step3
#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;
    cout << ((~a) & 0x1) << endl;
    return 0;
}