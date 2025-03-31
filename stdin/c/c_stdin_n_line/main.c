#include <stdio.h>
#include <stdlib.h>

// 行ごとの文字列構造値
struct LINE {
    // 文字列
    char line[101];

    // 次の行へのポインタ
    struct LINE* p_next;
};

int main()
{
    // 行数の入力
    int line_count;
    scanf("%d ", &line_count);

    // 各行の文字列を入力
    struct LINE* p_begin = NULL;
    struct LINE* p_current = NULL;
    for (int i = 0; i < line_count; i++) {
        if (p_begin == NULL) {
            p_begin = (struct LINE*)calloc(1, sizeof(struct LINE));
            p_current = p_begin;
        }
        else {
            p_current->p_next = (struct LINE*)calloc(1, sizeof(struct LINE));
            p_current = p_current->p_next;
        }

        fgets(p_current->line, sizeof(p_current->line), stdin);
    }

    // 入力内容の出力
    p_current = p_begin;
    while (p_current != NULL) {
        printf("%s", p_current->line);
        p_current = p_current->p_next;
    }

    // メモリの解放
    p_current = p_begin;
    while (p_current != NULL) {
        struct LINE* p_next  = p_current->p_next;
        free(p_current);
        p_current = p_next;
    }

    return 0;
}