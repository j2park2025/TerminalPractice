
#include <stdio.h>

int ff(int x, int y, int z);

int main ()
{
        int arr[10] = {9, 1, 3, 0, 2, 7, 6, 5, 4, 8};
	int i;

	for(i = 0; i<10; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");

	return 0;
}
