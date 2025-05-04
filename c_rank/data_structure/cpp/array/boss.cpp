// Paiza 問題集 データセット選択メニュー 動的配列 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__array_boss
#include <iostream>
#include <numeric>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> as;
    for (int i = 0; i < n; i++) {
        int a;

        cin >> a;
        as.push_back(a);
    }

    cin.ignore();
    for (int i = 0; i < q; i++) {
        string s;
        getline(cin, s);

        istringstream iss(s);
        int si;
        vector<int> qu;
        while (iss >> si) {
            qu.push_back(si);
        }

        switch (qu[0]) {
            case 0:
                as.push_back(qu[1]);
                break;

            case 1:
                as.pop_back();
                break;

            case 2: {
                string o
                    = accumulate(
                        as.begin(), as.end(),
                        string(),
                        [](const string& a, int b) {
                            return a.empty() ? to_string(b) : a + " " + to_string(b);
                        }
                    );
                    
                cout << o << endl;
                break;
            }
        }
    }

    return 0;
}