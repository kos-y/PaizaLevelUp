// Paiza 問題集 クラス・構造体メニュー クラスの作成 C編（paizaランク char 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__constructor
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int i, number;
    char name[21];
    
    struct employee* pn;

    void (*constructor)(struct employee*, int, char*);
    int (*getnumber)(struct employee*);
    char* (*getname)(struct employee*);
};

struct employee* make(int, char*);
void constructor(struct employee*, int, char*);
int getnumber(struct employee*);
char* getname(struct employee*);

int main()
{
    int n;
    struct employee *ps = NULL, *pc = NULL;
    
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char s[512];

        fflush(stdin);
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';

        char* p = strtok(s, " ");
        if (strcmp(p, "make") == 0) {
            int a = atoi(strtok(0, " "));
            char* name = strtok(0, " ");
            struct employee** ppt = ps == NULL ? &ps : &pc->pn;

            *ppt = make(a, name);
            pc = *ppt;
        } else if (strcmp(p,"getnum") == 0) {
            int a = atoi(strtok(0," "));
            struct employee* pb = ps;

            while (pb != NULL) {
                if (pb->i == a) {
                    printf("%d\n", pb->getnumber(pb));
                }

                pb = pb->pn;
            }
        } else if (strcmp(p, "getname") == 0) {
            int a = atoi(strtok(0, " "));
            struct employee* pb = ps;

            while (pb != NULL) {
                if (pb->i == a) {
                    printf("%s\n", pb->getname(pb));
                }

                pb = pb->pn;
            }
        }
    }

    return 0;
}

struct employee* make(int a, char* name)
{
    static int i = 1;
    struct employee* p = (struct employee*)calloc(1, sizeof(struct employee));

    p->constructor = constructor;
    p->getnumber = getnumber;
    p->getname = getname;
    p->constructor(p, a,name);
    p->i = i++;
    return p;
}

void constructor(struct employee* e, int num, char* name)
{
    e->number = num;
    strcpy(e->name, name);
}

int getnumber(struct employee* e)
{
    return e->number;
}

char* getname(struct employee* e)
{
    return e->name;
}