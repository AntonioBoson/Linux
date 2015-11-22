/* Includes */
#include <stdlib.h>

/* Defines */

/* Typedefs */
typedef struct cell 
{
	int content; 
    struct cell *next;
} t_cell;

/* Globals */
t_cell head; 		// Cabeca da lista. 
t_cell *p_head;		// Ponteiro para a primeira posicão da lista. 

/* Functions prototypes */
void initList();
void printAllCells();
void insertCellInTheEnd(int content);