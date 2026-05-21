#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char pool[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$^&*";

int main(void)
{
    srand(time(NULL));

    int len;

    do
    {
        printf("How many characters do you want your password to be? (8-16 characters): ");
        scanf("%d", &len);
    } 
    while (len < 8 || len > 16);

    char *chosen_pool = malloc(len + 1);

    int pool_size = strlen(pool);

    for (int i = 0; i < len; i++)
    {
        int index = rand() % pool_size;
        chosen_pool[i] = pool[index];
    }

    chosen_pool[len] = '\0';

    printf("Generated password: %s\n", chosen_pool);

    free(chosen_pool);

    return 0;
}