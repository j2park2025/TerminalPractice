#include <stdio.h>

int main ()
{
	int a; int b; int result;
	b=0;
	result=1;
	printf("Type a number\n");
	scanf("%d", &b);
	for(a=2;a<10;a++)
	{
		result=b*a;
		printf("%d * %d = %d\n", b, a, result);
	}
	return 0;
}

