#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, points;
	char n, o, p, q, r, s, t, u, v, w, x, y, z;
	points = 0;
	printf("Welcome to English Vocabulary game!\n");
	printf("How many words are you going to practice?(must be less than 11)\n");
	scanf("%d", &a);
	char word[100][50]; 
	char defi[100][100];
	char ans[100];
	
	sprintf(word[0], "%s", "Deceitful");
	sprintf(defi[0], "%s", "기만하다");
	sprintf(word[1], "%s", "Calamitous");
        sprintf(defi[1], "%s", "해를끼치는");
	sprintf(word[2], "%s", "Appease");
        sprintf(defi[2], "%s", "달래다");
	sprintf(word[3], "%s", "Impart");
        sprintf(defi[3], "%s", "전하다");
	sprintf(word[4], "%s", "Gallantry");
        sprintf(defi[4], "%s", "영웅적인행동");
	sprintf(word[5], "%s", "Horrifying");
        sprintf(defi[5], "%s", "끔찍한");
	sprintf(word[6], "%s", "Appendix");
        sprintf(defi[6], "%s", "맹장");
	sprintf(word[7], "%s", "Zest");
        sprintf(defi[7], "%s", "흥미");
	sprintf(word[8], "%s", "Mediate");
        sprintf(defi[8], "%s", "중재하다");
	sprintf(word[9], "%s", "Oesophagus");
        sprintf(defi[9], "%s", "기도");
	sprintf(word[10], "%s", "osteoporosis");
        sprintf(defi[10], "%s", "골다공증");

	printf("Game Starting!\n\n\n");
	
	srand(time(NULL));
	b = rand() % a;

	srand(time(NULL));
        e = rand() % a;
        f = rand() % a;

	for(c=1; c<=a; c++)
	{
		b = rand() % a;
		printf("\n\n\n\n\n\n\nQuestion.\nWrite down the correct definition of the word %s\n", word[b]);
		scanf("%s", ans);

		if(!strcmp(ans, defi[b]))
		{
			points++;
			printf("Correct!\n");
			printf("-----\nScore: %d\n", points);
			// for(c=1; c<=a; c++)
			// {
				// d = rand() % a;
				// printf("Question.\nWrite down the correct definition of the word %s\n", word[d]);
                		// scanf("%s", ans);
			// }
		}
		else {
		printf("incorrect!\n the correct answer is %s\n", defi[b]);
		printf("-----\nScore: %d\n", points);
		}
	}
	printf("-\n-\n-\nYour final score is %d/%d\n", points, a);


	return 0;
}		

