// Paiza 問題集 算術・代入演算メニュー 代入演算 3 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/arithmetic_substitution_op/arithmetic_substitution_op__substitution_step3
#include <iostream>
using namespace std;

int main()
{
    int n = 10000;
    
    n /= 361;
    n %= 28;
    cout << n << endl;
    return 0;
}