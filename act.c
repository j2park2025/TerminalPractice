#include <stdio.h>

int main ()
{
	int one; int times; int num;
	for(one=1;one<10;one++)
	{
		for(num=2;num<11;num++)
		{
			times=one*num;
			printf("%3d", times);
		}
		printf("\n");
	}
	return 0;
}

