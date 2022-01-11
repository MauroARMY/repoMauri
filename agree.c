#include<stdio.h>
#include<cs50.h>

int main(void)
{
        char c = get_char("Do you agree? [Y]es or [N]ot ");

        if (c == 'Y' || c== 'y')
        {
            printf("agreed\n");
        }
        else if (c == 'N' || c == 'n')
        {
            printf("not agreed\n");
        }
        else
        {
            printf("not valid character\n");
        }
}