#include "main.h"

void reg_log()
{
	int option;

	system("clear");
	printf("Select  to continue\n");
	printf("\tPress '1' to Register\n\tPress '2' to Login\n\n\t ==> ");
	scanf("%d",&option);

	getchar();           /* catching newline. */

	if(option == 1)
		registration();

	else if(option == 2)
		login();
}
void registration()
{
	FILE *admin_data;
	Login rg;

	system("clear");
	admin_data = fopen("reg.txt", "w");
	if (!admin_data)
	{
		printf("Error at opening File!");
		exit(1);
	}

	printf("\nWelcome to IEBC staff registration. We need to enter some details for registration.\n\n");
	printf("\nEnter First Name:\n");
	scanf("%s", rg.fname);
	printf("\nEnter Surname:\n");
	scanf("%s", rg.lname);

	printf("Thank you.\nNow please choose a username and password as credentials for system login."); 

	printf("\nEnter Username:\n");
	scanf("%s",rg.username);
	printf("\nEnter Password:\n");
	scanf("%s",rg.password);

	fwrite(&rg, sizeof(rg), 1, admin_data);
	fclose(admin_data);

	printf("\nConfirming details...\n...\nWelcome, %s!\n\n",rg.fname);
	printf("\nRegistration Successful!\n");
	printf("Press any key to continue...\n");
	getchar();
	login();
}

void login()
{
	FILE *admin_data;
	char username[30],password[20];
	Login lln;

	system("clear");
	admin_data = fopen("reg.txt", "r");
	if (admin_data == NULL)
	{
		printf("Error at opening login File!\n");
		exit(1);
	}
	printf("\nPlease Enter your login credentials below\n\n");
	printf("Username:  ");
	fgets(username, 30, stdin);
	printf("\nPassword: ");
	fgets(password, 20, stdin);

	while(fread(&lln, sizeof(lln), 1, admin_data))
	{
		if(strcmp(username,lln.username)==0 && strcmp(password,lln.password)==0)

		{   
			printf("\nSuccessful Login\n");
		}
		else 
		{
			printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
		}
	}

	sleep(4);
	staff();
	fclose(admin_data);
}

