// this program checks if a credit number given by the user is an AMEX, MasterCard, Visa or if is invalid, using a checksum
#include <cs50.h>
#include <stdio.h>
#include <math.h>

long get_credit_car_number(void);

int main(void)
{
    long number = get_credit_car_number();
    int suma = 0;
    int suma2 = 0; 
    int result = 0;
    int valid = 0;
    int gato = 0;
    int contador = 0;
    //int ctype = ??;

    /*for (int l = 1; l < 16; l++)
    {
        long perro = number / pow(10,l);
        if (perro < 100)
        {
            printf("%li\n", perro);
            break;
        }
    }*/
    while (contador < 16)
    {
        long digit = number / pow(10,contador);
        contador++;
        int last = contador + 1;
        if (digit < 100)
        {
            printf("%li\n", digit);
            
            if ((digit == 34 || digit == 37) && last == 15)
            {
                printf("AMEX\n");
            }
            else if ((50<digit<56) && last == 16)
            {
                printf("MasterCard\n");
            }
            else if ((last == 13 || last == 16) && 39<digit<50)
            {
                printf("Visa\n");
            }
            else
            {
                printf("others\n");
            }                  
            break;   
        }
    }
    printf("%i\n", contador + 1);    


    for (int i = 1; i < contador + 1; i+=2)
    {   
        int digit = fmod(number / pow(10,i), 10) * 2;

        if (digit > 9)
        {
            digit = (digit % 10) + 1;
        }
        suma = suma + digit;
        printf("%i ", digit);
    }
    printf("\n%i\n", suma);

    for (int j = 0; j < contador; j+=2)
    {
        int digit2 = fmod(number / pow(10,j), 10);

        if (digit2 > 9)
        {
            digit2 = (digit2 % 10) + 1;
        }
        printf("%i ",digit2);
        suma2 = suma2 + digit2;
    }
    printf("\n%i\n", suma2);

    result = suma + suma2;
    valid = result % 10;

    if (valid =! 0)
    {
    printf("Invalid Card\n\n");
    }
    
}

long get_credit_car_number(void)
{
    long number;
    do
    {
        number = get_long("\nEnter a Credit card number: ");
    } while (number < 1);    
    return number;
}
