/* Includes */
#include "linkedListWithHead.h"
#include <stdio.h>

/* Defines */

/* Typedefs */

/* Globals */

/* Functions */
void initList()
{
	head.next = NULL;	
	p_head = &head;
}

void printAllCells()
{
	/* Auxiliar pointer to a cell. */
	t_cell *p;
	
	for (p = p_head; p != NULL; p = p->next)
		printf("%d\n",p->content);
}

void insertCellInTheEnd(int content)
{
	/* Auxiliar pointer to a cell. */
	t_cell *p;

	/* Pointer to the new cell. */
	t_cell *p_newCell;

	/* Alocando nova célula. */
	p_newCell = malloc (sizeof(t_cell));
	
	/* Atribuindo valor ao atributo da nova célula. */
	p_newCell->content = content;
	p_newCell->next = NULL;

	/* Busca última posicão da lista. */
	p = p_head;
	while(p->next != NULL)
		p = p->next;

	/* Insere nova celular no fim. */
	p->next = p_newCell;	
}