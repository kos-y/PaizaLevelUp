#include <stdio.h>
#include <stdlib.h>

struct NM {
    double n;
    int m;
};

int main()
{
    int q;
    scanf("%d", &q);

    struct NM* pnm = (struct NM*)malloc(sizeof(struct NM) * q);
    for (int i = 0; i < q; i++) {
        scanf("%lf %1d", &pnm[i].n, &pnm[i].m);
    }

    char f[8];
    for (int i = 0; i < q; i++) {
        sprintf(f, "%%.%dlf\n", pnm[i].m);
        printf(f, pnm[i].n);
    }

    free(pnm);
    return 0;
}