
#include <stdio.h>

int ff(int x, int y, int z);

int main ()
{
        int fir; int sec; int thi; int med;
        printf("Enter three integers:\n");
        scanf("%d %d %d", &fir, &sec, &thi);
	med=ff(fir, sec, thi);
	printf("The median is...\n.\n.\n.\n.\n%d!!!\n", ff(fir, sec, thi));
}
int ff(int x, int y, int z)
{
        int result;
	if(((x>y)&&(y>z))||((z>y)&&(y>x)))
	{
		result=y;
	}
	if(((x>z)&&(z>y))||((y>z)&&(z>x)))
	{
		result=z;
	}
	if(((z>x)&&(x>y))||((y>x)&&(x>z)))
	{
		result=x;
	}
        return result;
}
