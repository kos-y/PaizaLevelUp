// Paiza 問題集 論理演算メニュー 論理演算を用いた計算のまとめ C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_boss
#include <iostream>
using namespace std;

int bitnot(int x);

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << (bitnot((bitnot(a) & bitnot(b)) | bitnot(c)) ^ d) << endl;
    return 0;
}

int bitnot(int x)
{
    return (~x) & 0x1;
}
