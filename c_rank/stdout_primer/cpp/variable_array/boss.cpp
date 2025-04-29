// Paiza 問題集 標準出力メニュー 標準出力メニュー【行によって長さが違う二次元配列の表示】すべての行の長さと値が不定な 2 次元配列の出力 C++編（paizaランク B 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__variable_array_boss
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void cin_vector(vector<int>& vs);

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();

    vector<int> as, bs;
    cin_vector(as);
    cin_vector(bs);

    for (int i = 0, j = 0, k = 1; i < as.size(); i++) {
        cout << as.at(i);
        if (k < bs[j]) {
            cout << " ";
            k++;
        } else {
            cout << endl;
            j++;
            k = 1;
        }
    }

    return 0;
}

void cin_vector(vector<int>& vs)
{
    string line;
    getline(cin, line);

    istringstream iss(line);
    int v;
    while(iss >> v) {
        vs.push_back(v);
    }
}