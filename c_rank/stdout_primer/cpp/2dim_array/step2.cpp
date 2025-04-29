// Paiza 問題集 標準出力メニュー 3 * 3 の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__2dim_array_step2
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<int> ns;
    int n;
    while (iss >> n) {
        ns.push_back(n);
    }

    for (int i = 0; i < ns.size(); i++) {
        cout << ns[i];
        if (i % 3 == 2) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}