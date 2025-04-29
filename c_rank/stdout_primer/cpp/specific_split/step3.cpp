// Paiza 問題集 標準出力メニュー カンマ区切りで 10 個出力 1 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__specific_split_step3
#include <iostream>
#include <iterator>
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

    copy(ns.begin(), ns.end(), ostream_iterator<int>(cout, ","));
    cout << endl;
    return 0;
}