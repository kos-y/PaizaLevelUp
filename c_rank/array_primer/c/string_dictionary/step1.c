// Paiza 問題集 配列メニュー 辞書順に出力 1 C編（paizaランク D 相当）
// https://paiza.jp/works/mondai/array_primer/array_primer__string_dictionary_step1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ELE(x) (sizeof(x) / sizeof(x[0]))

int cmp(const void* a, const void* b);

int main()
{
    char* s[] = {"zaipa", "izapa", "paiza"};
    
    qsort(s, NUM_ELE(s), sizeof(char*), cmp);
    for(int i = 0; i < NUM_ELE(s); i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}

int cmp(const void* a, const void* b)
{
    char** pa = (char**)a;
    char** pb = (char**)b;

    return strcmp(*pa, *pb);
}