#include "global.h"

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
