#include <stdio.h>
#include <stdlib.h>

typedef struct Square
{
	int number;
	
	char possible;
	int row;
	int col;
}Square;

int ** createPuzzle();

void printPuzzle(int ** puzzle);

