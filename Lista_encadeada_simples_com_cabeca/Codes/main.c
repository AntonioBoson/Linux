/**
 * Author: Antonio Boson
 * Email: antoniobosonjr@gmail.com
 *
 * Description: 
 * 
 * Implementation example of simple linked list with head on c language.
 *
 */

/* Includes */
#include <stdio.h>
#include "linkedListWithHead.h"

/* Main function */
int main()
{
	/* Initializes the list. */
	initList();

	/* Print all cells of the list. */
	printAllCells();

	/* Insert a cell at the end of the list. */
	insertCellAtTheEnd(999);

	return 0;
}