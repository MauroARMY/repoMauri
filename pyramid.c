#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;

    do
    {
        n = get_int("height of the pyramid: ");
    }
    while(n<1 || n>70);

    // for each row
        
        for (int i = 0; i < n; i++)
        {
    // for each column
    for (int k = i+1; k < n; k++)
    {
        printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
        printf("#");
    }
        printf("  ");
   
    for (int j = 0; j <= i; j++)
    {
        printf("#");
    }    
    
    printf("\n");
        }

}