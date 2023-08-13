#include <stdio.h>

int main ()
{
	int num; int ho; int it;
	printf("Enter a positive integer:");
	scanf("%d", &ho);
	if(ho<1)
	{
		printf("Error! Please type a POSITIVE integer\n");
		return 0;
	}
	it=0;
	for(num=2;num<ho;num++)
	{
		if(ho%num==0)
		{
			it=99;
			break;
		}
	}
	if(it==99)
	{
		printf("Not Prime\n");
	}
	else
	{
		printf("Prime\n");
	}
	return 0;
}

