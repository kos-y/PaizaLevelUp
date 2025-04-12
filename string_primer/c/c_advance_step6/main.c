#include <stdio.h>
#include <stdlib.h>

struct PW {
  int n;
  char c;
};

void make_password(int q, struct PW* ppw);
void remake_password(int n, int q, struct PW* ppw, char* pc, char c);

int main()
{
    int n, q;
    char c;
    
    scanf("%d", &n);
    scanf("%d", &q);
    struct PW* ppw = (struct PW*)calloc(q, sizeof(struct PW));
    make_password(q, ppw);
    scanf("%c", &c);
    char* pc = (char*)calloc(n, sizeof(char));
    remake_password(n, q, ppw, pc, c);
    printf("%s\n", pc);
    free(pc);
    free(ppw);
    return 0;
}

void make_password(int q, struct PW* ppw)
{
    for (int i = 0; i < q; i++) {
        scanf("%d %c ", &ppw[i].n, &ppw[i].c);
    }
}

void remake_password(int n, int q, struct PW* ppw, char* pc, char c)
{
    for (int i = 0; i < n; i++) {
        pc[i] = c;
    }

    for (int i = 0; i < q; i++) {
        pc[ppw[i].n - 1] = ppw[i].c;
    }
}