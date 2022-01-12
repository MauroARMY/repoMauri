#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>



int main(void)

{


char YN;


while (true)
{
    printf("choose one option: \n[1] verify if your ip is valid \n[2] convert a number to ASCII code \n[3] a random number \n[4] join 2 words\n ");
    int selector = get_int("type a number: ");

    if (selector == 1 )
    {

    }
    else if( selector == 2 ) //check
    {
    int conv = get_int("type number: ");
    printf("%i represents this: %c\n",conv,conv);

    }
    else if(selector == 3 )
    {
        srand(time(NULL));   
        int random = rand()  % 6;  
        while(random==0)
        {
            //printf("%i",random);
            random = rand()  % 6;  

           

            if(YN == NULL)
            {
            do
            { 
            char YN = get_char("[y]es or [n]ot");
            printf("do you want to do it again?");

            } while ( YN=='y');
               
                 
            }
            else if (YN == 'n')
            {
              continue;
            }
            

            
        }
        printf("%i\n",random);

    }
    else if(selector == 4 )
    {
        string word1 = get_string("word 1: ");
        string wordp = get_string("word 2: ");
        string word2 = (" %s",wordp);
        strcat(word1," ");
        strcat(word2,"-perrote");
        string complete = strcat(word1,word2);

        printf("%s\n",complete);

    }
    printf("do you want to continue?");
    char end = get_char("do you want to continue? [y]es or [n]ot");


    
        if (end == 'y' || end == 'Y')
        {
            continue;
        }
        else if ( end == 'n' || end == 'N')
        {
        break;
        }
      
    }
        
}







