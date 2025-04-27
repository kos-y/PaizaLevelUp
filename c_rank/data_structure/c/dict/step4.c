// Paiza 問題集 データセット選択メニュー 価格の算出 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/data_structure/data_structure__dict_step4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct AB {
  char a[11];
  int b;
};

int main()
{
    int n, m;
    scanf("%d %d ", &n, &m);
    struct AB* p_ab = (struct AB*)calloc(n, sizeof(struct AB));
    for (int i = 0; i < n; i++) {
        scanf("%s %d ", p_ab[i].a, &p_ab[i].b);
    }
    
    for (int i = 0; i < m; i++) {
        char a[11];
        int j;

        scanf("%10s", a);
        for (j = 0; j < n; j++) {
            if (strcmp(p_ab[j].a, a) == 0) {
                printf("%d\n", p_ab[j].b);
                break;
            }
        }
        
        if (j == n) {
            printf("-1\n");
        }
    }
    
    free(p_ab);
    return 0;
}