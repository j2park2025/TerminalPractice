
#include <stdio.h>

#define MAX_DEPTH   10
#define MAX_BACKET  3

int main (void)
{
	int backet_depth[MAX_BACKET] = {10, 5, 6};
	int backet_water[MAX_BACKET] = {5, 0, 6};
	
	int i, row;
	int num1, num2;
	int x, y;
	
	while(1)
	{
	
		printf("\n");
		for(row=MAX_DEPTH; row>=0; row--)
		{
			for(i=0; i<MAX_BACKET; i++)
			{
				if(row == 0)
				{
					printf("+-----+");
				} else {
					if(backet_depth[i] >= row)
					{
						printf("|");
						if(backet_water[i] == row)
							printf("-----");
							else printf("     ");
							printf("|");
						} else printf("       ");
					}
					printf("  ");
				}
				printf("\n");
			}
			if(backet_water[0] == 8)
			{
				printf("Contratulations! You've got 8-liters of water!\n");
				return 0;
			}
			
			printf("Enter a command:");
			scanf("%d-%d", &num1, &num2);

			if((num1<=0) || (num2<=0) || (num1>3) || (num2>3))
			{
				printf("Error!\n");
			} else {
				x=backet_water[num1-1];
				y=backet_water[num2-1];
				if(backet_depth[num2-1]>=(backet_water[num1-1] + backet_water[num2-1]))
				{
					backet_water[num2-1] = x+y;
					backet_water[num1-1] = x-x;
				} else {
					backet_water[num2-1] += (backet_depth[num2-1] - y);
					backet_water[num1-1] -= (backet_depth[num2-1] - y);
				}
			}
		}
		return 0;
	}
