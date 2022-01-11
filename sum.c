#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int X= get_int("X= ");
    int Y= get_int("y= ");

    printf("the sum of %X is: %i \n", X + Y);
}
