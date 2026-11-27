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
    
    char yn;
    printf("Do you want special characters? [y/N]");
    fgets(yn, sizeof(yn), stdin);

    char characters[15];
    for (int i = 0; i < 8; i++)
    {
        characters[i] = letters[rand() % 53];
    }
    if (yn == 'Y' || yn == 'y')
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
    
    char user[6];
    for (int i = 0; i < 3; i++)
    {
        user[i] = usernameP1[i];
    }
    for (int i = 3; i < 6; i++)
    {
        user[i] = usernameP2[i-3];
    }

    printf("%s\n", user);
}

int main()
{   
    usr();
    passwd();

    return 0;
}