#include <stdio.h>
#include "goblin.h"

int main() {
    Goblin g;
    Player p = { .hp = 100 };

    goblin_init(&g);

    printf("Игрок HP: %d\n", p.hp);
    goblin_attack(&p);
    printf("Игрок HP после атаки: %d\n", p.hp);

    return 0;
}