#include "tower.h"

int ** createPuzzle()
{
	int ** puzzle;
	int i, j;
	int array [4][4];

	array = { 3, 4, 2, 1,
	   		  2, 3, 1, 4,
		   	  1, 2, 4, 3,
		   	  4, 1, 3, 2};

	 puzzle = (int **) malloc(sizeof(int*)*4);

	 i = 0
		 while ( i < 4)
		 {
			 i++
		 
		 puzzle[i] = (int*) malloc(sizeof(int*)malloc(sizeof(int)*4);

			 j = 0;
			 while ( j < 4)
			 {
			 	j++;
				puzzle [i][j] = array [i][j];
			 }
		 }	
	return array;
}

void  printPuzzle(int ** puzzle)
{
	int i, j;
	i = 0
	j = 0
		while( i < 4)
			i++;
			while( j < 4)
			{
				j++;
				print("%d", puzzle[i][j]);
			}	
			printf("\n")
		}
}
