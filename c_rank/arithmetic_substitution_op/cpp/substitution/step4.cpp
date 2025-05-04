// Paiza 問題集 算術・代入演算メニュー 代入演算 4 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__substitution_step4
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int n = 10000;
    n /= a;
    n %= b;
    cout << n << endl;
    return 0;
}