// Paiza 問題集 論理演算メニュー 全加算器 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step9
#include <iostream>
using namespace std;

void add_half(int a, int b, int& c, int& s);

int main()
{
    int a, b, c1, cx, sy, cy, s;

    cin >> a >> b >> c1;
    add_half(a, b, cx, sy);
    add_half(sy, c1, cy, s);
    cout << (cx ^ cy) << " " << s << endl;
    return 0;
}

void add_half(int a, int b, int& c, int& s)
{
    c = a & b;
    s = a ^ b;
}
