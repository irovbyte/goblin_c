#include "global.h"

#include "global.h"

int hp_goblin; // определение глобальной переменной

int main(void)
{
    srand(time(NULL)); // инициализация генератора случайных чисел
    char nik[20];
    int player_gold = 0;
    hello(nik);
    while (1) {
        hp_goblin = rand() % 15; // случайная жизнь гоблина от 1 до 15
        printf("Атака гоблина. \n(Нажми на (E)-для атаки) \n(Нажми на (R)-чтобы напугать Гоблина\n");
        printf("Жизнь Гоблина: %d\n", hp_goblin);
        int old_gold = player_gold;
        player_gold = battle(player_gold);
        if (player_gold == old_gold) {
            printf("Гоблин сбежал! Новый гоблин выходит на бой!\n");
        } else {
            printf("Ты победил гоблина! Новый гоблин выходит на бой!\n");
        }
        printf("Хочешь продолжить игру? (Y - да, N - нет)\n");
        char cont;
        while ((cont = getchar()) == '\n');
        if (cont == 'N' || cont == 'n') break;
    }
    printf("Игра окончена! Всего монеток на балансе: %d\n", player_gold);
    return 0;
}
