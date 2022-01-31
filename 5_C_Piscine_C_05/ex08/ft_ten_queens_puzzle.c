#include<unistd.h>
#include<stdio.h>

void printSolution(int board[10][10])
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}
int is_safe(int board[10][10], int row, int col)
{	
	int i;
	int j;

	j = col;
	while (j >= 0)
	{
		if (board[row][j] == 1)
			return (0);
			j--;
	}
	j = col;
	i = row;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
			return (0);
		i--;
		j--;
	}
	while (i < 10 && j >= 0)
	{
		if (board[i][j] == 1)
			return (0);
		i++;
		j--;
	}
	return (1);
}

int rec_back(int board[10][10], int col)
{
	int i;

	i = 0;
	if (col >= 10)
		return (1);
	while (i < 10)
	{
		if (is_safe(board, i, col) == 1)
		{
			board[i][col] = 1;
		}
		if(rec_back(board, col + 1))
			return (1);
		board[i][col] = 0;
	}
	return (0);
}

int ft_ten_queens_puzzle(void)
{
	int board[10][10];
	int row;
	int col;

	row = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}

	rec_back(board,0);
	printSolution(board);
/*	char pos[10];
	
	row = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			if(board[row][col] == 1)
			{
				pos[col] = row + '0';
			}
			col++;
		}
	row++;
	}

	write(1, pos, 101);*/
	
	return 1;
}
