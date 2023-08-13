#include <stdio.h>
#include <time.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m;
	char n, o, p, q, r, s, t, u, v, w, x, y, z;
	printf("Welcome to English Vocabulary game!\n");
	printf("How many words are you going to practice?(must be less than 11)\n");
	scanf("%d", &a);
	char word[100][50]; 
	char defin[100][100];
	for(b=1; b<=a; b++)
	{
		c=b-1
		printf("Write down the word you want to study:\n");
		sprintf(word[c], "%s", "&n");
		printf("Write down a synonym for that word\n");
		sprintf(defin[c], "%s", "&o");
	}
	printf("Game Starting!\n\n\n");
	
	srand(time(NULL));
	d = rand(1 % a);

	for(e=1; e<=a; e++)
	{
		printf("First question.\nWrite down the number of the correct definition of the word &s\n", word[d]);
		sprinf(defin[d]"")
		printf("1) %s 2) %s 3) %s")
	}


	return 0;
}		

