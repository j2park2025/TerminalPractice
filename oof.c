
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INNUM  9
#define ROW    3
#define COL    3

void init_board();
void draw_board();
int insert_board(int n, int turn);
int check_winner(int turn);

int Board [3] [3];    //0 is NULL, 1 is '0', 2 is 'X' 

int main ()
{
	
	int i, j;
	int in_num;
	int man_turn = 1;
	int rand_num = 0;
	int your_turn = 0;
	int is_over = 0;

	init_board();
	
	srand(time(NULL));
	rand_num = rand() % 2;

	if(rand_num == 0)
	{
		your_turn = (your_turn != 1) ? 1 : 2;
		man_turn = 2;
		rand_num = (rand() % 9) + 1;
		while(!(insert_board(rand_num, your_turn))) {
			printf("Wrong number!\n\n");
			printf("Enter a number : ");
			scanf("%d", &in_num);
		}
		printf("\n");
		draw_board();
	}
	
	while(1)
	{
		your_turn = (your_turn != 1) ? 1:2;
		if(your_turn == man_turn) {
			printf("Enter a number : ");
			scanf("%d", &in_num);
			
			while(!(insert_board(in_num, your_turn))) {
				printf("Wrong number!\n\n");
				printf("Enter a numer : ");
				scanf("%d", &in_num);
			}
		} else {
			while(!(insert_board((rand() %9) + 1, your_turn)));
		}
		
		printf("\n");
		draw_board();
		is_over = check_winner(your_turn);
		if(is_over)
		{
			if(is_over == 3) {
				printf("Draw!\n");
			} else if(is_over == man_turn) {
				printf("You win!\n");
			} else {
				printf("You lost...\n");
			}
			break;
		}
	}
	
	return 0;
}

void init_board()
{
	int i, j;

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			Board[i][j] = 0;
		}
	}
	draw_board();
}

void draw_board()
{
	int i, j;
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(Board[i][j] == 0) printf(" %c ", ' ');
			else if(Board[i][j] == 1) printf(" %c ", 'O');
			else if(Board[i][j] == 2) printf(" %c ", 'X');
			if(j < 2) printf("|");
		}
		if(i < 2) printf("\n---+---+---\n");
	}
	printf("\n");
}

int insert_board(int n, int turn)
{
	int row = 0;
	int col = 0;
	row = n / (ROW + 1);
	col = (n - (row * COL)) - 1;

	if(n <= 0) return 0;
	else if(n > INNUM) return 0;
	else if(Board[row][col] != 0) return 0;
	else Board[row][col] = turn;

	return 1;

}

int check_winner(int turn)
{
	int i, j;

	for(i = 0; i < ROW; i++) {
		if((Board[i][0] == turn) && (Board[i][1] == turn) && (Board[i][2] == turn)) return turn;
	}
	for(i = 0; i < COL; i++) {
		if((Board[0][i] == turn) && (Board[1][i] == turn) && (Board[2][i] == turn)) return turn;
	}
	if((Board[0][0] == turn) && (Board[1][1] == turn) && (Board[2][2] == turn)) return turn;
	if((Board[0][2] == turn) && (Board[1][1] == turn) && (Board[2][0] == turn)) return turn;
		
	for(i = 0; i < ROW; i++) {
 		for(j = 0; j < COL; j++) {
			if(Board[i][j] == 0) return 0;
		}
	}
	
	return 3;
}		

