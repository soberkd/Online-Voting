#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
struct Login
{
	char fname[30];
	char lname[30];
	char username[30];
	char password[20];
};
typedef struct Login Login;

void reg_log();
void main_page();
void registration();
void login();
void main_header();
void staff(void);
void candidate(void);
void voter(void);
void admin_header();

#endif
