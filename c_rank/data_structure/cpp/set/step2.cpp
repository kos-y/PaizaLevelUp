// Paiza 問題集 データセット選択メニュー 重複の削除 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_step2
#include <iostream>
#include <numeric>
#include <set>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> as;
    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        as.insert(a);
    }

    string o
        = accumulate(
            as.begin(), as.end(),
            string(),
            [](const string& a, int b) {
                return a.empty() ? to_string(b) : a + " " + to_string(b);
            }
        );
    
    cout << o << endl;
   return 0;
}