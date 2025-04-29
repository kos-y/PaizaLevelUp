// Paiza 問題集 標準出力メニュー 【文字列の出力】入力された 10 個の文字列を出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__string_output_boss
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    vector<string> ss;
    istringstream iss(line);
    string is;
    while (iss >> is) {
        ss.push_back(is);
    }

    for (string& os : ss) {
        cout << os << endl;
    }

    return 0;
}