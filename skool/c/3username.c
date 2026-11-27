#include <stdio.h>
#include <ctype.h>

int main(void)
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
    
    printf("Username: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c", usernameP1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c", usernameP2[i]);
    }
    printf("\n");

    return 0;
}