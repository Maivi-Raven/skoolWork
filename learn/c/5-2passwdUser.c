#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void passwd()
{
    srand(time(NULL));    

    char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char special[33] = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    
    char yn[2];
    printf("Do you want special characters? [Y/n]");
    if (fgets(yn, sizeof yn, stdin) == NULL) 
    {
    return;
    }

    char characters[15];
    for (int i = 0; i < 8; i++)
    {
        characters[i] = letters[rand() % (sizeof letters - 1)];
    }
    if (yn[0] == 'Y' || yn[0] == 'y' || yn[0] == '\n')
    {
        for (int i = 0; i < 4; i++)
        {
            characters[i+8] = special[rand() % (sizeof special - 1)];
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
}

void usr()
{
    char usernameP1[32];
    char usernameP2[32];

    printf("Enter your first name: ");
    scanf("%31s", usernameP1);
    
    printf("Enter your last name: ");
    scanf("%31s", usernameP2);
    
    for (int i = 1; usernameP1[i] != '\0'; i++)
    {
        usernameP1[i] = tolower(usernameP1[i]);
    }
    usernameP1[0] = toupper(usernameP1[0]);
    for (int i = 0; usernameP2[i] != '\0'; i++)
    {
        usernameP2[i] = tolower(usernameP2[i]);
    }   

    char user[7];
    snprintf(user, sizeof user, "%.3s%.3s", usernameP1, usernameP2);
    printf("%s\n", user);
}

int main()
{   
    usr();
    passwd();

    return 0;
}