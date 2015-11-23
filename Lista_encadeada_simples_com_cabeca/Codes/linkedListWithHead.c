/* Includes */
#include "linkedListWithHead.h"
#include <stdio.h>

/* Defines */

/* Typedefs */

/* Globals */

/* Functions */

/** 
 *  @brief Initializes linked list with head
 *	Initializes linked list by setting the head
 */
void initList()
{
	head.next = NULL;	
	p_head = &head;
}

/** 
 *  @brief Print all cell values
 *	Print on the screen the value of all the existent cells
 */
int printAllCells()
{
	/* Auxiliar pointer to a cell. */
	t_cell *p;
	
	for (p = p_head; p != NULL; p = p->next)
		printf("%d\n",p->content);

	return 0;
}

/** 
 *  @brief 
 *	
 */
int deleteAllCells()
{
	return 0;
}

/** 
 *  @brief 
 *	
 */
void insertCellAtTheEnd(int content)
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

/** 
 *  @brief 
 *	
 */
void insertCellAtTheBeginning(int content)
{
}

/** 
 *  @brief 
 *	
 */
int insertCellAtPosition(int content, int position)
{
	return 0;
}

/** 
 *  @brief 
 *	
 */
int getFirstCell()
{
	return 0;
}

/** 
 *  @brief 
 *	
 */
int getLastCell()
{
	return 0;
}

/** 
 *  @brief 
 *	
 */
int getCellByPosition(int position)
{
	return 0;
}