#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int points = get_int("How many points did you loose?");

    if (points < 2)
    {
        printf("you lost less points than me");
    }
    else if ( points > 2)
    {
        printf("you lost more points than me");
    }
    else
    {
        printf("you lost the same points as me");
    }
}