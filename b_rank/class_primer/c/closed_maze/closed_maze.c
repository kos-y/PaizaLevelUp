// Paiza 問題集 クラス・構造体メニュー 出口のない迷路 C編（paizaランク B 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__closed_maze
#include <stdio.h>
#include <stdlib.h>

struct MAZE {
    char a;
    int r1, r2;
};

int main()
{
    int n, k, s;

    scanf("%d %d %d ", &n, &k, &s);
    struct MAZE* maze = (struct MAZE*)calloc(n, sizeof(struct MAZE));
    for (int i = 0; i < n; i++) {
        scanf("%c %d %d ", &maze[i].a, &maze[i].r1, &maze[i].r2);
    }
    
    int j = s - 1;
    printf("%c", maze[j].a);
    for (int i = 0; i < k; i++) {
        int m;

        scanf("%d", &m);
        j = m == 1 ? maze[j].r1 - 1 : maze[j].r2 - 1;
        printf("%c", maze[j].a);
    }

    printf("\n");
    free(maze);
    return 0;
}
