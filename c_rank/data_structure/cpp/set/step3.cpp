// Paiza 問題集 データセット選択メニュー 重複の判定 1 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_step3
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> as;
    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        if (as.size() > 0) {
            cout << (any_of(as.begin(), as.end(), [&](int x){ return x == a; }) ? "Yes" : "No") << endl;
        }

        as.push_back(a);
    }

   return 0;
}