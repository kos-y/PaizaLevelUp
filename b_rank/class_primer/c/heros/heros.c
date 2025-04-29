// Paiza 問題集 クラス・構造体メニュー RPG C編（paizaランク B 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__heros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct HERO {
    int l, h, a, d, s, c, f;
};

void levelup(struct HERO* hero);
void muscle_training(struct HERO* hero);
void running(struct HERO* hero);
void study(struct HERO* hero);
void pray(struct HERO* hero);

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    struct HERO* hero = (struct HERO*)calloc(n, sizeof(struct HERO));
    for (int i = 0; i < n; i++) {
        scanf("%d", &hero[i].l);
        scanf("%d", &hero[i].h);
        scanf("%d", &hero[i].a);
        scanf("%d", &hero[i].d);
        scanf("%d", &hero[i].s);
        scanf("%d", &hero[i].c);
        scanf("%d", &hero[i].f);
    }
    
    for (int i = 0; i < k; i++) {
        int j;
        char event[16];

        scanf("%d", &j);
        j--;
        scanf("%15s", event);
        if (strcmp(event, "levelup") == 0) {
            levelup(&hero[j]);
        } else if (strcmp(event, "muscle_training") == 0) {
            muscle_training(&hero[j]);
        } else if (strcmp(event, "running") == 0) {
            running(&hero[j]);
        } else if (strcmp(event, "study") == 0) {
            study(&hero[j]);
        } else if (strcmp(event, "pray") == 0) {
            pray(&hero[j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d", hero[i].l);
        printf(" %d", hero[i].h);
        printf(" %d", hero[i].a);
        printf(" %d", hero[i].d);
        printf(" %d", hero[i].s);
        printf(" %d", hero[i].c);
        printf(" %d", hero[i].f);
        printf("\n");
    }
    
    free(hero);
    return 0;
}

void levelup(struct HERO* hero)
{
    int buf;
    
    hero->l++;
    scanf("%d", &buf);
    hero->h += buf;
    scanf("%d", &buf);
    hero->a += buf;
    scanf("%d", &buf);
    hero->d += buf;
    scanf("%d", &buf);
    hero->s += buf;
    scanf("%d", &buf);
    hero->c += buf;
    scanf("%d", &buf);
    hero->f += buf;
}

void muscle_training(struct HERO* hero)
{
    int buf;
    
    scanf("%d", &buf);
    hero->h += buf;
    scanf("%d", &buf);
    hero->a += buf;
}

void running(struct HERO* hero)
{
    int buf;
    
    scanf("%d", &buf);
    hero->d += buf;
    scanf("%d", &buf);
    hero->s += buf;
}

void study(struct HERO* hero)
{
    int buf;
    
    scanf("%d", &buf);
    hero->c += buf;
}

void pray(struct HERO* hero)
{
    int buf;
    
    scanf("%d", &buf);
    hero->f += buf;
}