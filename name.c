// this program ask your name and then, say hi to your name.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("what's your name? ");
    printf("hi, %s\n", answer);
}