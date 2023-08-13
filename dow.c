#include <stdio.h>

int main ()
{
	int fir; int sec; int thi; int med;
	printf("Enter three integers:\n");
	scanf("%d %d %d", &fir, &sec, &thi);

	if(fir>sec)
	{

		if(sec>thi)
		{
			printf("Median = %d\n", sec);
		}
		if(thi>fir)
		{
			printf("Median = %d\n", fir);
		}
		if(fir>thi)
		{
			if(thi>sec)
			{
				printf("Median = %d\n", thi);
			}
		}
	}
	if(sec>fir)
	{
		if(thi>sec)
		{
			printf("Median = %d\n", sec);
		}
		if(fir>thi)
		{
			printf("Median = %d\n", fir);
		}
	}
	if(sec>thi)
	{
		if(thi>fir)
		{
			printf("Median = %d\n", thi);
		}
	}
	
	return 0;
}

