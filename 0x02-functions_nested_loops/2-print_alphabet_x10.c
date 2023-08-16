#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
    int i;
    char letter;
     
    for(i = 0 ; i <= 10 ; i++)
	    _putchar(i);
    _putchar('\n');
    for(letter = 'a' ; letter <= 'z' ; letter++)
	    _putchar(letter);
    _putchar('\n');
    return(0);
}

