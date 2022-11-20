#include "main.h"

/**
 * main - main function of the voting system 
 *
 * Return: always 0
 */ 
int main(void)
{
	int verify_reg;
	main_header();
	printf("\n\n\tKindly choose your category to continue\n\n");
	printf("\n\tPress 1 for Staff\n\tPress 2 for Candidate\n\tPress 3 for Voter\n\n");
	printf("______________________________________________________________________\n");
	printf("\t\t\t\t -->");
	scanf("%d", &verify_reg);
	switch (verify_reg)
	{
		case 1:
			reg_log();
			break;
		case 2:
			candidate();
			break;
		case 3:
			voter();
			break;
		default:
			printf("Kindly enter a valid input");
			break;
	}


	printf("\n\n\n\t\t***************Transparent***************\n");
	printf("=======================================================================\n");

	return (0);
}
