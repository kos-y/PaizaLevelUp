// Paiza 問題集 クラス・構造体メニュー クラスの作成 C編（paizaランク C 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__make_class
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int i, number;
    char name[21];
    struct employee* pn;
    
    int (*getnumber)(struct employee* e);
    char* (*getname)(struct employee* e);
};

struct employee* make(int a, char* name);
int getnumber(struct employee* e);
char* getname(struct employee* e);

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
            int a = atoi(strtok(NULL, " "));
            char* name = strtok(NULL, " ");
            
            struct employee** pt = ps == NULL ? &ps : &pc->pn;
            *pt = make(a, name);
            pc = *pt;
        } else if (strcmp(p, "getnum") == 0) {
            int a = atoi(strtok(NULL, " "));
            struct employee* pb = ps;

            while (pb != NULL) {
                if (pb->i == a) {
                    printf("%d\n", pb->getnumber(pb));
                }

                pb = pb->pn;
            }
        } else if (strcmp(p, "getname") == 0) {
            int a = atoi(strtok(NULL, " "));
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
    
    p->number = a;
    strcpy(p->name, name);
    p->getnumber = getnumber;
    p->getname = getname;
    p->i = i++;
    return p;
}

int getnumber(struct employee* e)
{
    return e->number;
}

char* getname(struct employee* e)
{
    return e->name;
}