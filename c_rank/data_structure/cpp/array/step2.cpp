// Paiza 問題集 データセット選択メニュー 複数回のランダムアクセス C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_step2
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
        as.push_back(a);
    }

    int q;
    cin >> q;

    vector<int> bs;
    for (int i = 0; i < q; i++) {
        int b;

        cin >> b;
        bs.push_back(b);
    }

    for (int b : bs) {
        cout << as[b - 1] << endl;
    }

    return 0;
}