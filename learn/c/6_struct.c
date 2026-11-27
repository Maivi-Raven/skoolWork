#include <stdio.h>

struct Product 
{
    char *name;
    double price;
    int quantity;
};

int main()
{
    struct Product products[4] =
    {
        {"Ahlgrens bilar", 17.50, 2},
        {"Gott och blandat", 18.50, 3},
        {"Pringles Sourcream and Onion", 35.95, 2},
        {"Turkisk Peppar", 24.99, 1}      
    };
    double total;
    for (int i = 0; i < 4; i++)
    {
        printf("%s\nPrice: %.2lf\nQuantity: %i\n\n",products[i].name,products[i].price,products[i].quantity);
        total += products[i].price;
    }
    printf("Total: %.2lf\n", total);

    return 0;
}