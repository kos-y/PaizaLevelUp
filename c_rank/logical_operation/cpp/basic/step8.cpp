// Paiza 問題集 論理演算メニュー 半加算器 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/logical_operation/logical_operation__basic_step8
#include <iostream>
using namespace std;

void add_half(int a, int b, int& c, int& s);

int main()
{
    int a, b, c, s;

    cin >> a >> b;
    add_half(a, b, c, s);
    cout << c << " " << s << endl;
    return 0;
}

void add_half(int a, int b, int& c, int& s)
{
    c = a & b;
    s = a ^ b;
}
