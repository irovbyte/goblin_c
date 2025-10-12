#include "global.h"

int battle(int player_gold) {
    int gold = 15;
    int hp_goblin = 3;
    char attack;
    while (hp_goblin > 0) {
        while ((attack = getchar()) == '\n'); // ждём символ
        if (attack == 'E' || attack == 'e') {
            printf("Пнул гоблина. \nЖизнь Гоблина: %d\n", hp_goblin-1);
            hp_goblin--;
        } else if (attack == 'R' || attack == 'r') {
            int chance = rand() % 2;
            if (chance == 0) {
                return player_gold;
            } else {
                printf("Гоблин не напуган! Продолжаем бой.\n");
            }
        } else {
            printf("Некорректный ввод!\n");
        }
    }
    printf("Красава! ты убил Гоблина. \n");
    printf("Получаешь награду %d монеток. Всего %d монеток на балансе!\n", gold, player_gold + gold);
    player_gold += gold;
    return player_gold;
}