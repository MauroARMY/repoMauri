#include <stdio.h>

void meow(void);

int main(void)
{
    int n = get_int("how many meows do you want? ");

    for (int i=0; i<n; i++)
    {
        meow();
    }
}
void meow(void)
{
    printf("meow\n");
}