#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Number = get_int("write a number: ");
    
    if (Number%2==0)
    {
        printf("the number %i is even\n", Number);
    }
    else 
    {
        printf("the number %i is odd\n", Number);
    }
}