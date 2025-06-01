// Paiza 問題集 Dランク・実力確認問題セット1 ダウンロード(Easy) C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/rank_test_problems_d_0001/rank_test_problems_d_0001__1
#include <iostream>
using namespace std;

int main()
{
    int s, a, t;
    cin >> s >> a >> t;

    double ta = t * a;
    double sa = s * a;
    cout << (int)((ta / sa) * 100.0) << endl;
    return 0;
}