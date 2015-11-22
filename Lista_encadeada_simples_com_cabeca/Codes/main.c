/* Includes */
#include <stdio.h>
#include "linkedListWithHead.h"

/* Main function */
int main()
{
	// A lista está vazia. Ponteiro para próxima célula está vazio.

	initList();
	printAllCells();
	insertCellInTheEnd(999);
	printAllCells();

	return 0;
}