// Paiza 問題集 算術・代入演算メニュー 累乗 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__arithmetic_step5
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    const int a = 202, b = 134, c = 107;
    
    cout << static_cast<int>(pow((a + b) * c, 2)) << endl;
    return 0;
}