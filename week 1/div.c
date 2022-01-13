#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_int("x= ");
    float y = get_int("y= ");
    float div= x/y;

    printf(" la división es %.3f", div);
}