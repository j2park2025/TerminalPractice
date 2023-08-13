
#include <stdio.h>

int ff(int x, int y, int z);

int main ()
{
        int arr[10] = {9, 1, 3, 0, 2, 7, 6, 5, 4, 8};
	int i; int input; int h; int room;

	for(i = 0; i<10; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
	printf("input number: \n");
	scanf("%d", &input);
	for(h=0; h<10; h++) {
		if(arr[h]==input)
		{
			room=h+1;	
			printf("Number %d is %dth\n", input, room);
		}
	}
	return 0;
}
