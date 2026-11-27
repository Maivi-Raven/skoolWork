#include <stdio.h>
#include <string.h>

int main()
{
    char user[100];
    printf("Enter your username: ");
    scanf("%s", user);
    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(user, "admin") == 0 && strcmp(password, "admin") == 0)
    {
        printf("Welcome, admin!");
    }
    else
    {
        printf("Access denied. Invalid username or password.");
    }
    
    return 0;
}