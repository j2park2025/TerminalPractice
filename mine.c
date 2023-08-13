#include <stdio.h>

int main ()
{
	int a; int b;
	b=0;
	printf("Type a number\n");
	scanf("%d", &b);
	printf("The common factor is");
	for(a=1;a<b;a++)
	{
		if(b%a==0)
		printf(" %d,", a);
	}
	printf("\n");
	return 0;
}

