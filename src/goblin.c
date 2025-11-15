#include "goblin.h"
#include <stdio.h>

void goblin_init(Goblin *g) {
    g->hp = 100;
    g->attack = 15;
}

void goblin_attack(Player *p) {
    printf("Гоблин атакует! Наносит %d урона.\n", 15);
    p->hp -= 15;
}