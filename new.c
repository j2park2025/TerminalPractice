#include <stdio.h>

int main ()
{
	int input; int result;
	printf("Enter a two-digit number:");
	scanf("%d", &input);
	result=input/10+(10*(input-(10*(input/10))));
	printf("The reversal is %d\n", result);
	return 0;
}

