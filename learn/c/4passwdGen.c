#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));    

    char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char special[33] = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    
    char yn = 'Y';
    printf("Do you want special characters? [y/N]\n");
    scanf("%c", &yn);

    char characters[15];
    for (int i = 0; i < 8; i++)
    {
        characters[i] = letters[rand() % 53];
    }
    if (yn == 'Y' || yn == 'y' || yn == '\n')
    {
        for (int i = 0; i < 4; i++)
        {
            characters[i+8] = special[rand() % 33];
        }
        for (int i = 0; i < 2; i++)
        {
            characters[i+12] = '0' + rand() % 10;
        }
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            characters[i+8] = '0' + rand() % 10;
        } 
    }
    characters[14] = '\0';
    printf("%s\n", characters);

    return 0;
}