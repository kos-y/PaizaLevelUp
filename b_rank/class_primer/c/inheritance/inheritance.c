// Paiza 問題集 クラス・構造体メニュー クラスの継承 C編（paizaランク B 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__inheritance
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct Human {
    int id, age, price;
    bool is_alcohol;
};

void order(struct Human* ph, char* order_kind, int price);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    struct Human* h = (struct Human*)calloc(n, sizeof(struct Human));
    for (int i = 0; i < n; i++) {
        int age;

        scanf("%d", &age);
        h[i].id = i + 1;
        h[i].age = age;
    }
    
    for (int i = 0; i < k; i++) {
        int id, price;
        char order_kind[16];

        scanf("%d %15s %d", &id, order_kind, &price);
        for (int i = 0; i < n; i++) {
            if (h[i].id == id) {
                order(&h[i], order_kind, price);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", h[i].price);
    }
    
    free(h);
    return 0;
}

void order(struct Human* ph, char* order_kind, int price)
{
    if (ph->age < 20 && strcmp(order_kind, "alcohol") == 0) {
        return;
    }
    
    if (ph->is_alcohol && strcmp(order_kind, "food") == 0) {
        price -= 200;
    }
    
    ph->price += price;
    if (strcmp(order_kind, "alcohol") == 0) {
        ph->is_alcohol = true;
    }
}