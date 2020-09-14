#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        // Monnaies dues
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);

    // Dollars convertis en cents
    int cents = round(dollars * 100);

    // Nombres de pièces dues
    int coins = 0;

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%i\n", coins);
}
