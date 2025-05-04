// Paiza 問題集 データセット選択メニュー 集合の探索 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__set_step1
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;

    vector<int> as;
    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        as.push_back(a);
    }

    cout << (any_of(as.begin(), as.end(), [&](int a){ return a == b; }) ? "Yes" : "No") << endl;
    return 0;
}