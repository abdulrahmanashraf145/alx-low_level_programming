#include <unistd.h>

void more_numbers(void) {
    int i, j;
    char number;
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 14; j++) {
            if (j < 10) {
                number = j + '0';
            } else {
                number = (j / 10) + '0';
                _putchar(number);
                number = (j % 10) + '0';
            }
	    _putchar(number);
        }
        _putchar('\n');
    }
}

