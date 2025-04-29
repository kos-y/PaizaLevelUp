// Paiza 問題集 クラス・構造体メニュー クラスの継承 C編（paizaランク B 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__set_default
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct Human {
    int id;
    int age;
    int price;
    bool is_alcohol;
};

struct Human* make_human(int n);
char* input_order();
struct Human* get_human(struct Human* h, int n, int id);
void delete_new_line(char* s);
void order(struct Human* ph, char* order_kind, int price);

int main()
{
    int n, k;
    scanf("%d %d ", &n, &k);
    
    struct Human* h = make_human(n);
    
    for (int i = 0; i < k; i++) {
        char* buf = input_order();
        
        int id = atoi(strtok(buf, " "));
        struct Human* ph = get_human(h, n, id);
        
        char* order_kind = strtok(NULL, " ");
        delete_new_line(order_kind);
        
        if (strcmp(order_kind, "0") == 0) {
            order(ph, "alcohol", 500);
        }
        else {
            int price = atoi(strtok(NULL, " "));
            order(ph, order_kind, price);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", h[i].price);
    }
    
    free(h);
    return 0;
}

struct Human* make_human(int n)
{
    struct Human* h = (struct Human*)calloc(n, sizeof(struct Human));
    for (int i = 0; i < n; i++) {
        int age;
        scanf("%d ", &age);
        
        h[i].id = i + 1;
        h[i].age = age;
    }
    
    return h;
}

char* input_order()
{
    static char buf[512];
    
    fflush(stdin);
    fgets(buf, sizeof(buf), stdin);
    
    return buf;
}

struct Human* get_human(struct Human* h, int n, int id)
{
    for (int i = 0; i < n; i++) {
        if (h[i].id == id) {
            return &h[i];
        }
    }
    
    return NULL;
}

void delete_new_line(char* s)
{
    char* p = strchr(s, '\n');
    if (p != NULL) {
        *p = '\0';
    }
}

void order(struct Human* ph, char* order_kind, int price)
{
    if (ph->age < 20 && (strcmp(order_kind, "alcohol") == 0 || strcmp(order_kind, "0") == 0)) {
        return;
    }
    
    if (ph->is_alcohol && strcmp(order_kind, "food") == 0) {
        price -= 200;
    }
    
    if (strcmp(order_kind, "0") == 0) {
        ph->price += 500;
        ph->is_alcohol = true;
        return;
    }
    
    ph->price += price;
    if (strcmp(order_kind, "alcohol") == 0) {
        ph->is_alcohol = true;
    }
}