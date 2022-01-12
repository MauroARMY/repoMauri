#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

char temp;

int main(void)
{
    printf("\nMENÚ:\n1) string to lower case.\n2) string to upper case.\n3) sandwiched.\n4) change letter.\n5) system().\n  ");

    int menu = 0;
    char yn;
    do 
    {
    menu = get_int("chose your number [1-5]: ");
    } while (menu <1 || menu >5);
    


    while (menu >0 && menu <6 )
    {
        if (menu == 1 )
        {
            do
            {
            
                printf("string to lower case.");
                string st = get_string("type: ");
                //int len = strlen(st);
                for (int i=0, len = strlen(st); i< len; i++)
                {
                    if (st[i] >= 'A' && st[i] <= 'Z')
                    {
                        printf("%c", st[i]+32);
                    }
                    else
                    {
                        printf("%c", st[i]);
                    }
                }

                 yn = get_char("\ndo you want to do it again?");
            }while(yn == 'y');
            

        }

        else if(menu == 2 )
        {
            do
            {
                string st = get_string("type: ");
                for (int i=0, len = strlen(st); i< len; i++)
                {
                    if (st[i] >= 'a' && st[i] <= 'z')
                    {
                        printf("%c", st[i]-32);
                    }
                    else
                    {
                        printf("%c", st[i]);
                    }
                }    
            

            yn = get_char("\ndo you want to do it again? ");
            }while(yn == 'y');

        }

        else if(menu == 3 )
        {
            do
            {
            printf("sandwiched.");
            string st = get_string("type: ");
             for (int i=0, len = strlen(st); i< len; i++)
                {
                    if (st[i] >= 'a' && st[i] <= 'z' && i%2==0)
                    {
                        printf("%c", st[i]-32);
                    }
                    else 
                    {
                        printf("%c", st[i]);
                    }
                }    

            yn = get_char("\ndo you want to do it again?");
            }while(yn == 'y');
        }

        else if (menu == 4 )
        {
            do
            {
            //scanf("%c",&temp);
            char sandwich[50];
           
            printf("type a string, the letter that yo want to replace it without spaces (string,letter,character) ");
            scanf("%[^\n]", sandwich);


            char * string = strtok(sandwich,",");
            char * letter = strtok(NULL,",");
            char * character = strtok(NULL,",");

            printf("change letter.");




            yn = get_char("do you want to do it again?");
            }while(yn == 'y');

            
        }
        

        else if(menu == 5 )
        {
            do
            {
            printf("string to upper case.");
            char command[20];
            printf("Enter a command ");
            scanf ("%[^\n]",command);
            system(command);
            yn = get_char("do you want to do it again?");
            }while(yn == 'y');
        }
        
        printf("\nMENÚ:\n1) string to lower case.\n2) string to upper case.\n3) sandwiched.\n4) change letter.\n5) system().\n  ");
        menu = get_int("chose your number [1-5]: ");
    }

}