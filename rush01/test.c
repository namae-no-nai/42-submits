#include "tower.h"

int main()
{
	int ** puzzle;

	puzzle = createPuzzle();
	
	printPuzzle(puzzle);

	tower = setUpPuzzle(puzzle);

	return (0);
}
