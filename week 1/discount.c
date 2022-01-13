#include <stdio.h>
#include <cs50.h>

float discount (float mauricio, float sale);

int main(void)
{
float sale= get_float("how much is the percent item discount? ");
float price = get_float("which es the regular price of the item ? ");
float current = discount(price, sale);

printf("the current price is %.2f\n", current);
}

float discount(float mauricio, float franco)
{
    return mauricio - (mauricio * franco/100);
}