#include <stdio.h>

int main()
{
    int vs[] = {112, 97, 105, 122, 97, 0};

    for (int i = 0; vs[i] != 0; i++) {
        printf("%c", vs[i]);
    }
    printf("\n");
    return 0;
}