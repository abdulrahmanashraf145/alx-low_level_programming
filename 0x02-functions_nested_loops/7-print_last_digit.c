#include <stdio.h>

int print_last_digit(int number) 
{
    int last_digit = number % 10; 
    printf("The last digit is: %d\n", last_digit);
    return last_digit;
}
