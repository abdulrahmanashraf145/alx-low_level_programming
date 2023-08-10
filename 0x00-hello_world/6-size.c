#include <stdio.h>
int main(void){
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu bytes(s)\n", (unsigend long)sizeof(a));
printf("Size of a int: %lu  bytes(s)\n", (unsigend long)sizeof(b));
printf("Size of a long: %lu bytes(s)\n", (unsigend long)sizeof(c));
printf("Size of a long int : %lu bytes(s)\n", (unsigend long)sizeof(c));
printf("Size of a long long int : %lu bytes(s)\n", (unsigend long)sizeof(d));printf("Size of a float: %lu bytes(s)\n", (unsigend long)sizeof(f));
return(0);
}
