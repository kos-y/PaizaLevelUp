// Paiza 問題集 クラス・構造体メニュー スーパースーパースーパーカー C編（paizaランク A 相当）
// https://paiza.jp/works/mondai/class_primer/class_primer__super_super_supercar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct SUPER_CAR {
    int l, f, k;
    
    void (*run)(struct SUPER_CAR* super_car);
    void (*fly)(struct SUPER_CAR* super_car);
    void (*teleport)(struct SUPER_CAR* super_car);
};

void run_super_car(struct SUPER_CAR* super_car);
void fly_super_super_car(struct SUPER_CAR* super_car);
void fly_super_super_super_car(struct SUPER_CAR* super_car);
void teleport_super_super_super_car(struct SUPER_CAR* super_car);
void empty(struct SUPER_CAR* super_car);

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    struct SUPER_CAR* super_car = (struct SUPER_CAR*)calloc(n, sizeof(struct SUPER_CAR));
    for (int i = 0; i < n; i++) {
        char k[64];

        scanf("%63s", k);
        scanf("%d", &super_car[i].l);
        scanf("%d", &super_car[i].f);
        
        if (strcmp(k, "supercar") == 0) {
            super_car[i].run = run_super_car;
            super_car[i].fly = empty;
            super_car[i].teleport = empty;
        } else if (strcmp(k, "supersupercar") == 0) {
            super_car[i].run = run_super_car;
            super_car[i].fly = fly_super_super_car;
            super_car[i].teleport = empty;
        } else if (strcmp(k, "supersupersupercar") == 0) {
            super_car[i].run = run_super_car;
            super_car[i].fly = fly_super_super_super_car;
            super_car[i].teleport = teleport_super_super_super_car;
        }
    }
    
    for (int i = 0; i < k; i++) {
        int j;
        char f[32];

        scanf("%d %31s", &j, f);
        j--;
        if (strcmp(f, "run") == 0) {
            super_car[j].run(&super_car[j]);
        } else if (strcmp(f, "fly") == 0) {
            super_car[j].fly(&super_car[j]);
        } else if (strcmp(f, "teleport") == 0) {
            super_car[j].teleport(&super_car[j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", super_car[i].k);
    }
    
    free(super_car);
    return 0;
}

void run_super_car(struct SUPER_CAR* super_car)
{
    if (super_car->l > 0) {
        super_car->l--;
        super_car->k += super_car->f;
    }
}

void fly_super_super_car(struct SUPER_CAR* super_car)
{
    if (super_car->l < 5) {
        super_car->run(super_car);
    } else {
        super_car->l -= 5;
        super_car->k += super_car->f * super_car->f;
    }
}

void fly_super_super_super_car(struct SUPER_CAR* super_car)
{
    if (super_car->l < 5) {
        super_car->run(super_car);
    } else {
        super_car->l -= 5;
        super_car->k += 2 * (int)(pow(super_car->f, 2));
    }
}

void teleport_super_super_super_car(struct SUPER_CAR* super_car)
{
    int a = super_car->f * super_car->f;
    
    if (super_car->l < a) {
        super_car->fly(super_car);
    } else {
        super_car->l -= a;
        super_car->k += (int)pow(super_car->f, 4);
    }
}

void empty(struct SUPER_CAR* super_car)
{
}