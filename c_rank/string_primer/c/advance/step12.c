#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000

void input(char* s, size_t sz);
int todigit(char c);

int main()
{
    char s[LEN + 2], t[LEN + 2];

    input(s, sizeof(s));
    input(t, sizeof(t));
    
    int sl = strlen(s);
    int tl = strlen(t);
    char* p = (char*)calloc(sl + tl + 1, sizeof(char));
    memset(p, '0', sl + tl);

    for (int j = tl - 1; j >= 0; j--) {
        for (int i = sl - 1; i >= 0; i--) {
            int k = i + j + 1;
            
            int sv = todigit(s[i]);
            int tv = todigit(t[j]);
            int pv = todigit(p[k]);
            int tmp = sv * tv + pv;
            p[k] = (tmp % 10) + '0';
            int c = tmp / 10;
            while (c != 0) {
                tmp = (p[--k] - '0') + c;
                p[k] = (tmp % 10) + '0';
                c = tmp / 10;
            }
        }
    }
    
    int i;
    for (i = 0; p[i] == '0'; i++);
    if (p[i] == '\0') {
        printf("0\n");
    }
    else {
        for (; p[i] != '\0'; i++) {
            printf("%c", p[i]);
        }
        printf("\n");
    }

    free(p);
    return 0;
}

void input(char* s, size_t sz)
{
    fgets(s, sz, stdin);
    s[strcspn(s, "\n")] = '\0';
}

int todigit(char c)
{
    return c - '0';
}