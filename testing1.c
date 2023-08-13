
#include <stdio.h>

int main ()
{
	int i, j, o, p, k;
	printf("Welcome to Water Bottle game! If you type two numers of the bottles with a space in between, like 1 3, the water will move to the second number.\n\n");
	for(i=0;i<4;i++) {
		printf("|     |\n");
	}

	printf("|     |           |-----|\n");
	printf("|-----|  |     |  |     |\n");

	for(i=0; i<6; i++) {
		printf("|     |  |     |  |     |\n");
	}
	printf("+-----+  +-----+  +-----+\n");
        return 0;
}
