// Paiza 問題集 標準出力メニュー 10 個の数値を出力 (末尾に半角スペース有) C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__space_oneline_step3
#include <iostream>
#include <numeric>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    vector<int> vs(10);

    iota(vs.begin(), vs.end(), 1);
    copy(vs.begin(), vs.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}