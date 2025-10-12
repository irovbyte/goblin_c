#include <stdio.h>
#include <stdlib.h>

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

int hello(char *nik)

{
    char c;

    printf("Как тебя звать?\n");

    scanf("%s", nik);

    while ((c = getchar()) != '\n' && c != EOF); //чистка буфера 

    printf("Чо? А тебя зовут - %s?\n", nik);

    printf("%s! Приятной тебе игры!\n", nik);
    
    return 0;
}

int main(void)
{
    char nik[20];
    int player_gold = 0;
    hello(nik);
    while (1) {
        printf("Атака гоблина. \n(Нажми на (E)-для атаки) \n(Нажми на (R)-чтобы напугать Гоблина) \nЖизнь Гоблина: 3\n");
        int old_gold = player_gold;
        player_gold = battle(player_gold);
        if (player_gold == old_gold) {
            printf("Гоблин сбежал! Новый гоблин выходит на бой!\n");
        } else {
            printf("Ты победил гоблина! Новый гоблин выходит на бой!\n");
        }
        printf("Всего монеток на балансе: %d\n", player_gold);
        printf("Хочешь продолжить игру? (Y - да, N - нет)\n");
        char cont;
        while ((cont = getchar()) == '\n');
        if (cont == 'N' || cont == 'n') break;
    }
    printf("Игра окончена! Всего монеток на балансе: %d\n", player_gold);
    return 0;
}
