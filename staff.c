#include "main.h"

void staff(void)
{
	int choice;
	admin_header();
	printf("\t1. Manage voters\n\t2. Manage Candidates\n\t3. View elections results\n\t4. Admin\n\t0. Exit");
	printf("\n\n\tselect then press Enter >>   ");
	scanf("%d", &choice);

}
