#include "main.h"

/**
 * main - main function of the voting system 
 *
 * Return: always 0
 */ 
int main(void)
{
	int verify_reg;
	system("clear");
	printf("-----------------------------------------------------------");
	printf("\n|\n\t***************Welcome to ECK 2022***************\n");
	printf("\t**Your trusted partner in elections managemant**\n\n\n");
	printf("-----------------------------------------------------------");
	printf("\n\nKindly verify your voting status to continue\n\n");
	printf("Kindly press\n1 to go to the main ECK page or\n2 to register as a voter\n");
	scanf("%d", &verify_reg);
	switch (verify_reg)
	{
		case 1:
			main_page();
			break;
		case 2:
			registration();
			break;
		default:
			printf("Kindly enter a valid input");
			break;
	}


	printf("\n\n\n***************Transparent***************\n");

	return (0);
}
