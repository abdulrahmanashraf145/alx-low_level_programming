#include <stdio.h>
int main () {
	int num ;
	srand (time(0));
	num = rand() - RAND_MAX /2;
	if (num > 0){
		printf ("%d is positive",num);
	}
	else if(num == 0) {
		printf ("%d is zero",num);
	}
	else {
		  printf ("%d is negative";num);
	}

	return(0);
}
	
