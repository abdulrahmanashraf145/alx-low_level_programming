#include <unistd.h>

void print_numbers(void) {
    char numbers[] = "0123456789\n";
    int length = sizeof(numbers) - 1;
    
    write(1, numbers, length);
}
