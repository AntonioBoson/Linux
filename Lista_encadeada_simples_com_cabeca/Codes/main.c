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

/* Defines */
#define PRINT_ALL_CELLS		1
#define DELETE_ALL_CELLS	2
#define INSERT_CELL_END		3
#define INSERT_CELL_BEGIN	4
#define INSERT_CELL_AT_POS	5
#define GET_FIRST_CELL		6
#define GET_LAST_CELL		7
#define GET_CELL_AT_POS		8
#define EXIT				9
#define CLEAN 				255

/* Functions prototypes. */
inline void printMenu();
inline void clearScreen();
void executeOption(unsigned char option);

/* Main function */
int main()
{
	/* Variable to keep the option chosen by the user. */
	unsigned char option = CLEAN;

	/* Initializes the list. */
	initList();

	/* Implement simple menu. */
	do
	{
		/* Print menu at the screen. */
		printMenu();

		/* Get user option. */
		option = getchar() - 48;	// Getchar do get user option.
		getchar();					// Getchar to consume the \n character.

		/* Execute option. */
		executeOption(option);
		
	}while(option != EXIT);

	return 0;
}

/** 
 *  @brief 
 *	
 */
void printMenu()
{
	printf("1. Imprimir todas as celulas\n");
	printf("2. Deletar todas as celulas\n");
	printf("3. Inserir celula no final\n");
	printf("4. Inserir celula no comeco\n");
	printf("5. Inserir celula na posicao x\n");
	printf("6. Buscar primeira celula\n");
	printf("7. Buscar ultima celula\n");
	printf("8. Buscar celula da posicao x\n");
	printf("9. Exit\n");
}

/** 
 *  @brief 
 *	
 */
void clearScreen()
{
	printf("\e[H\e[2J");
}

/** 
 *  @brief 
 *	
 */
void executeOption(unsigned char option)
{
	switch (option)
	{
		case PRINT_ALL_CELLS:
			/* Print all cells of the list. */
			printAllCells();
			break;

		case DELETE_ALL_CELLS:
			break;	

		case INSERT_CELL_END:
			/* Insert a cell at the end of the list. */
			insertCellAtTheEnd(999);
			break;

		case INSERT_CELL_BEGIN:
			break;

		case INSERT_CELL_AT_POS:
			break;

		case GET_FIRST_CELL:
			break;

		case GET_LAST_CELL:
			break;

		case GET_CELL_AT_POS:
			break;

		case EXIT:
			break;				
	}
}