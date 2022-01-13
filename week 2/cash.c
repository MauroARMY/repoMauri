#include <stdio.h>
#include <cs50.h>




int perro(int mauri);
int main(void)
{
    int change;
    int value = value(change);
    int quarter= quarter(change);

}

int value(int change)
{
    change = get_int("how much change do you need? ");
    return change;
}
int quarter(int change)
{
    do
    {
        value = change/25;
    } while (value>25);

    return value;
    
}