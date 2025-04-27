// Paiza 問題集 文字列処理メニュー 数式の計算（ 1 桁） C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/string_primer/advance_step9
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[10002], o = '\0';
    int sum = 0, v = -1;
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int len = strlen(s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            if (v == -1) {
                v = s[i] - '0';
            }
            else {
                v *= 10;
                v += s[i] - '0';
            }
            
            if (i == len - 1 || !isdigit(s[i + 1])) {
                if (o == '\0') {
                    sum = v;
                }
                else {
                    switch (o) {
                        case '+':
                            sum += v;
                            break;
                        case '-':
                            sum -= v;
                            break;
                    }
                }
                v = -1;
            }
        }
        else {
            o = s[i];
        }
    }
    
    printf("%d\n", sum);
    return 0;
}