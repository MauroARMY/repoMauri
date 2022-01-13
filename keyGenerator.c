#include <stdio.h>
#include <cs50.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    for (int i = 0 ; i < 26; i++)
    {
        
        srand(time(NULL));   
        int random = rand()  % 90;  
        do
        {
            if ((random>63 && random<91))
            {
                printf("\n%i",random); 
                i++;
            }
            else
            {
                int random = rand()  % 90;
            }

        } while (i<27);
        
        
        

    }
    
  
}