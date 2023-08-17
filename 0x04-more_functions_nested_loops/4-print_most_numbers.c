#include <unistd.h>

void print_most_numbers(void) {
    char numbers[] = "01356789\n";
    int length = sizeof(numbers) - 1;

    write(1, numbers, length);
}
