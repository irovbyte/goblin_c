#include "global.h"
#include "miner.h"

int miner_active = 0;
int miner_income = 2;

void activate_miner(int *player_gold) {
    if (!miner_active && *player_gold >= 10) {
        printf("Нанять гоблина-шахтёра за 10 монет? (Y/N)\n");
        char hire;
        while ((hire = getchar()) == '\n');
        if (hire == 'Y' || hire == 'y') {
            *player_gold -= 10;
            miner_active = 1;
            printf("Гоблин-шахтёр нанят!\n");
        }
    }
}

void miner_income_tick(int *player_gold) {
    if (miner_active) {
        *player_gold += miner_income;
        printf("Шахтёр принёс %d монет. Баланс: %d\n", miner_income, *player_gold);
    }
}