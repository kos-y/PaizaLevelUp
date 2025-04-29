// Paiza 問題集 クラス・構造体メニュー 格闘ゲーム C編（paizaランク B 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__fighting_game
#include <stdio.h>
#include <stdlib.h>

struct WEPON {
    int f, a;
};

struct PLAYER {
    int hp;
    struct WEPON wepon[3];
};

void burst(struct PLAYER* player);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    struct PLAYER* player = (struct PLAYER*)calloc(n, sizeof(struct PLAYER));
    for (int i = 0; i < n; i++) {
        scanf("%d", &player[i].hp);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &player[i].wepon[j].f);
            scanf("%d", &player[i].wepon[j].a);
        }
    }

    for (int i = 0; i < k; i++) {
        int p1, t1, p2, t2;

        scanf("%d %d %d %d", &p1, &t1, &p2, &t2);
        p1--;
        t1--;
        p2--;
        t2--;
        if (player[p1].hp <= 0 || player[p2].hp <= 0) {
            continue;
        }
        
        if (player[p1].wepon[t1].f == 0) {
            burst(&player[p1]);
            if (player[p2].wepon[t2].f > 0) {
                player[p1].hp -= player[p2].wepon[t2].a;
            }
        } else if (player[p2].wepon[t2].f == 0) {
            burst(&player[p2]);
            if (player[p1].wepon[t1].f > 0) {
                player[p2].hp -= player[p1].wepon[t1].a;
            }
        } else if (player[p1].wepon[t1].f < player[p2].wepon[t2].f) {
            player[p2].hp -= player[p1].wepon[t1].a;
        } else if (player[p1].wepon[t1].f > player[p2].wepon[t2].f) {
            player[p1].hp -= player[p2].wepon[t2].a;
        }
    }
    
    int player_count = 0;
    for (int i = 0; i < n; i++) {
        if (player[i].hp > 0) {
            player_count++;
        }
    }

    printf("%d\n", player_count);
    free(player);
    return 0;
}

void burst(struct PLAYER* player)
{
    for (int i = 0; i < 3; i++) {
        if (player->wepon[i].f > 0) {
            player->wepon[i].f -= 3;
            player->wepon[i].a += 5;
            if (player->wepon[i].f <= 0) {
                player->wepon[i].f = 1;
            }
        }
    }
}