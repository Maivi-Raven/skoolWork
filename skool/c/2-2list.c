#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

//ensure correct capitalisation
void capital(char *input)
{
    input[0] = toupper(input[0]);
    for (int i = 1; input[i] != '\0'; i++)
    {
        input[i] = tolower(input[i]);
    }
}

int main()
{
    char *menu[] = {"Pizza", "Burger", "Pasta", "Salad", "Sandwich", "Tacos", "Sushi", "Steak", "Chicken"};
    printf("Welcome to Food Place! \nPlease choose from the following menu by wrighting it: \n");
    int array = sizeof(menu) / sizeof(menu[0]);
    int i;
    for (i = 0; i < array; i++)
    {
        printf("%s\n", menu[i]);
    }
    bool outer = true;
    while (outer == true)
    {
        printf("Input: ");
        char input[16] = {0};
        scanf("%15s", input);
        capital(input);

        bool find = false;
        int j = 0;
        bool inner = true;
        while (inner == true)
        {
            if (j >= 0 && j < array && menu[j] != NULL && strcmp(menu[j], input) == 0)
            {
                inner = false;
                find = true;
            }
            else if (j > i)
            {
                printf("%s is not on the menu.\n", input);
                inner = false;
            }
            else
            {
                j++;
            }
        }
        if (find == true)
        {
            printf("Enjoy your %s!", input);
            outer = false;
        }
    } 
    return 0;
}