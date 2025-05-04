// Paiza 問題集 算術・代入演算メニュー 代入演算 2 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__substitution_step2
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;


    int n = 0;
    n += a;
    n *= b;
    n %= c;
    cout << n << endl;
    return 0;
}