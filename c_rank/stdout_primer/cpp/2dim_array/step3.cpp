// Paiza 問題集 標準出力メニュー 九九表の出力 C++編（paizaランク D 相当）
// https://paiza.jp/works/mondai/stdout_primer/stdout_primer__2dim_array_step3
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i * j;
            if (j < 9) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}