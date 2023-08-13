#include <stdio.h>

int ff(int x, int y);

void main ()
{
	int i, dev;
	i=5;
	dev=ff(i, 100);
	printf("result: %d\n", dev);
}

int ff(int x, int y)
{
        int result;
        result=x*y;
        return result;
}



