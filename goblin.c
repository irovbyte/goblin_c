#include <stdio.h>

int main (void) { 
    
    int gold = 15;
    int hp_goblin = 3;
    char attack;

    printf("Атака гоблина. (Нажми на (E)-для атаки) \n(Нажми на (R)-чтобы убежать) \nЖизнь Гоблина: %d\n", hp_goblin);

    attack = getchar();

    while (attack != 'r')
    {
            if (attack == 'E' || attack == 'e')
        {
            hp_goblin = hp_goblin -1; 
            printf("Пнул гоблина. \nЖизнь Гоблина: %d\n", hp_goblin);
        }

     if (hp_goblin < 1)
        {

            printf("Красава! ты убил Гоблина. \n");
            printf("Получаешь награду %d монеток. \n", gold);
        }
     else
        {
            printf("Гоблин убежал - ты лох! \n");
        }   
            printf("Чо дальше делать будешь? \n");
            getchar();
            attack = getchar();
    }
    
    printf("куда бежишь? \n");

    return 0;
}