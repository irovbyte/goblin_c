#include <stdio.h>

int main (void) { 
    
    int gold = 15;
    int hp_goblin;
    int player_gold = 0;
    char attack;

    printf("Атака гоблина. (Нажми на (E)-для атаки) \n(Нажми на (R)-чтобы убежать) \nЖизнь Гоблина: %d\n", hp_goblin);

    attack = getchar();

    while (attack != 'r')
    {
        if (attack == 'E' || attack == 'e')
        {
            for (hp_goblin = 3; hp_goblin >= 0; hp_goblin--)
            {
                if (hp_goblin != 3)
                    printf("Пнул гоблина. \nЖизнь Гоблина: %d\n", hp_goblin);
                     
                if (hp_goblin == 0)
                {
                    printf("Красава! ты убил Гоблина. \n");
                    printf("Получаешь награду %d монеток. Всего %d монеток на балансе!\n", gold, player_gold += gold);
                    break;
                }
            }
        }

     else
        {
            if (attack == 'r')
            printf("Гоблин убежал - ты лох! \n");
        }   
            printf("Чо дальше делать будешь? \nНажми на (E)-для атаки \nНажми на (R)-чтобы убежать");
            getchar();
            attack = getchar();
    }
        if (attack == 'r')
        {
        printf("куда бежишь? \n");
        }
    

        return 0;
}