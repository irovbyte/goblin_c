#include "global.h"

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