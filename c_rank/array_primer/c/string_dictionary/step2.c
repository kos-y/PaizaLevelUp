// Paiza 問題集 配列メニュー 辞書順に出力 2 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_dictionary_step2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
#define M 11

int cmp(const void* a, const void* b);

int main()
{
    char s[N][M];

    for (int i = 0; i < N; i++) {
        scanf("%s", s[i]);
    }

    qsort(s, N, M, cmp);
    for(int i = 0; i < N; i++) {
        printf("%s\n", s[i]);
    }
    
    return 0;
}

int cmp(const void* a, const void* b)
{
    char* pa = (char*)a;
    char* pb = (char*)b;
    
    return strcmp(pa, pb);
}