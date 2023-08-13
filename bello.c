#include <stdio.h>

int main ()
{
	int math; int english; float average;
	printf("Type your math score\n");
	scanf("%d", &math);
	printf("Type your english score\n");
	scanf("%d", &english);
	average=(math+english)/2.0;
	printf("Your average score is %.1f\n", average);
	return 0;
}

