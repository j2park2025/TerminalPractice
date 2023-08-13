
#include <stdio.h>

int ff(int x, int y);

int main ()
{
        int i; int sum; int k;
        printf("Insert two numbers:\n");
	scanf("%d %d", &i, &k);
        sum=ff(i, k);
        printf("result: %d\n", ff(i, k));
}

int ff(int x, int y)
{
        int result;
        result=x+y;
        return result;
}
