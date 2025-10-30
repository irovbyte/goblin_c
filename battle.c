#include "global.h"

int battle(int player_gold) {
    int gold = rand() % 15; // случайное количество монеток от 1 до 15
    char attack;
    while (hp_goblin > 0) {
        // 20% шанс побега гоблина на каждом ходе
        int escape_chance = rand() % 100;
        if (escape_chance < 5) {
            return player_gold;
        }
        while ((attack = getchar()) == '\n'); // ждём символ
        if (attack == 'E' || attack == 'e') {
            hp_goblin--;
            if (hp_goblin > 0) {
                printf("Пнул гоблина. \nЖизнь Гоблина: %d\n", hp_goblin);
            }
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