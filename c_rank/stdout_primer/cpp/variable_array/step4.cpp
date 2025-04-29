// Paiza 問題集 標準出力メニュー すべての行の長さが不定な 2 次元配列の出力 C++編（paizaランク C 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_step4
#include <iostream>
#include <sstream>
using namespace std;

void cout_array(int e);

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string line;
    getline(cin, line);

    istringstream iss(line);
    int m;
    while (iss >> m) {
        cout_array(m);
    }

    return 0;
}

void cout_array(int e)
{
    for (int i = 1; i <= e; i++) {
        cout << i;
        if (i < e) {
            cout << " ";
        }
    }

    cout << endl;
}