/*This file is to print the Employee details*/

#include"myHeader.h"
extern employee *head;
void printList()
{
	employee *print = head;
	if(print == NULL)
		printf("No Employee list found \n");
	while(print != NULL)
	{
		printf("=============================================================\n");
		printf("Name of the employee	: %s\n",print->name);
		printf("Age of the employee 	: %d\n",print->age);
		printf("Salary of the employee 	: %d\n",print->salary);
		printf("=============================================================\n");
		print = print->next;
	}	
}
