#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    string ip= get_string("type your ip");
    //printf ("%s", ip);
    string split = strtok(ip,".");

    if (split != NULL)
    {
        printf("%s",split);
        while(split != NULL)
        {
            printf("%s\n",split);
            split = strtok(NULL,".");
        }
    }

   
       
    
    

    /*strtol(cadena,NULL,10);

    int puto = strtol(cadena,NULL,10);

    int suma = puto + perro;

    printf("%i",suma);*/


}