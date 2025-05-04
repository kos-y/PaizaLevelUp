// Paiza 問題集 算術・代入演算メニュー 累乗 2 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__arithmetic_step6
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << static_cast<int>(pow((a + b) * c, 2)) % d << endl;
    return 0;
}