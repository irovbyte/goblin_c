#ifndef GOBLIN_H
#define GOBLIN_H

typedef struct {
    int hp;
    int attack;
} Goblin;

typedef struct {
    int hp;
} Player;

void goblin_init(Goblin *g);
void goblin_attack(Player *p);

#endif