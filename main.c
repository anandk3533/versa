/**
 * @file main.c
 * @brief Main application file.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "sub.h"
#include "add.h"

/*#ifdef DISABLE_PRINT
#define printf(fmt, ...) ((void)0)
#endif*/

void display_menu(void)
{
	printf("=======Options=======\n0.Quit\n1.Addition\n2.Substraction\n");
}

int select_menu()
{
	unsigned int choice=0;
	int number1=0, number2=0;
	int result = 0;
	display_menu();
	scanf("%d",&choice);		
	switch(choice)
	{

		case 0:
		{

			printf("\nQuiting the Applicaiton \n");
			return FAILURE;
			break;
		}

		case 1:
		{
			printf("Enter number1 for add:\n");
			scanf("%d", &number1);
			printf("Enter number2 for add:\n");
			scanf("%d", &number2);	
			result = add(number1, number2);
			printf("result of addition is %d\n", result);

			
		break;
		}
		
		case 2:
		{
			printf("Enter number1 for add:\n");
			scanf("%d", &number1);
			printf("Enter number2 for add:\n");
			scanf("%d", &number2);	
			result = sub(number1, number2);
			printf("result of subtraction is %d\n", result);

		break;
		}
		
		default:

			printf("invalid number entered\n");
			return FAILURE;
	
	}
	return SUCCESS;
}

#ifndef NOMAIN
int main()
{

	int return_status = 0;
	while(1)
	{
		
		return_status = select_menu();
		if(return_status != 0)
		{
			break;
		}
	}

	return SUCCESS; 
}
#endif
