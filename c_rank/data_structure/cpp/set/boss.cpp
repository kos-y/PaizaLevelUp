// Paiza 問題集 データセット選択メニュー 集合の結合 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_boss
#include <iostream>
#include <numeric>
#include <set>
#include <string>
using namespace std;

void input(int n, set<int>& cs);

int main()
{
    int n;
    cin >> n;

    set<int> cs;
    input(n, cs);
    input(n, cs);

    string o
        = accumulate(
            cs.begin(), cs.end(),
            string(),
            [](const string& a, int b) {
                return a.empty() ? to_string(b) : a + " " + to_string(b);
            }
        );

    cout << o << endl;
    return 0;
}

void input(int n, set<int>& cs)
{
    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        cs.insert(a);
    }
}