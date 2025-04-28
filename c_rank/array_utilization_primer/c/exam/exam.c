// Paiza 問題集 配列活用メニュー 傾斜配点 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/array_utilization_primer/array_utilization_primer__exam
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int m[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &m[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int sc = 0;

        for (int j = 0; j < 5; j++) {
            int s;

            scanf("%d", &s);
            sc += s * m[j];
        }
        
        if (sc > sum) {
            sum = sc;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}