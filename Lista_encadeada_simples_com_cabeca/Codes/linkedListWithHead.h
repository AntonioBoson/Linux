/* Includes */
#include <stdlib.h>
#include <stdio.h>

/* Defines */
#define SUCCESS_OPERATION		-1
#define EMPTY_LIST 				-2
#define NONEXISTENT_POSITION	-3

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
int printAllCells();
int deleteAllCells();
void insertCellAtTheEnd(int content);
void insertCellAtTheBeginning(int content);
int insertCellAtPosition(int content, int position);
int getFirstCell();
int getLastCell();
int getCellByPosition(int position);