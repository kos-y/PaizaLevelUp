// Paiza 問題集 クラス・構造体メニュー ロボットの暴走 C編（paizaランク A 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__robot_move
#include <stdio.h>
#include <stdlib.h>

#define ITEM_COUNT 10

struct ITEM {
    int x, y;
};

struct ROBOT {
    int x, y, l;
};

int length(struct ROBOT* robot);

int main()
{
    int h, w, n, k;

    scanf("%d %d %d %d", &h, &w, &n, &k);
    struct ITEM* item = (struct ITEM*)calloc(ITEM_COUNT, sizeof(struct ITEM));
    for (int i = 0; i < ITEM_COUNT; i++) {
        scanf("%d %d", &item[i].x, &item[i].y);
    }
    
    struct ROBOT* robot = (struct ROBOT*)calloc(n, sizeof(struct ROBOT));
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &robot[i].x, &robot[i].y, &robot[i].l);
    }
    
    for (int i = 0; i < k; i++) {
        int r;
        char d;

        scanf("%d %c", &r, &d);
        r--;
        
        switch (d) {
            case 'N': robot[r].y -= length(&robot[r]); break;
            case 'S': robot[r].y += length(&robot[r]); break;
            case 'E': robot[r].x += length(&robot[r]); break;
            case 'W': robot[r].x -= length(&robot[r]); break;
        }
        
        if (robot[r].l < 4) {
            for (int i = 0; i < ITEM_COUNT; i++) {
                if (item[i].x == robot[r].x && item[i].y == robot[r].y) {
                    robot[r].l++;
                    break;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", robot[i].x, robot[i].y, robot[i].l);
    }
    
    free(robot);
    free(item);
    return 0;
}

int length(struct ROBOT* robot)
{
    switch (robot->l) {
        case 1: return 1;
        case 2: return 2;
        case 3: return 5;
        case 4: return 10;
    }
    
    return 0;
}