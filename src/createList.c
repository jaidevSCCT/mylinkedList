/*This file is to create the list only */
#include"myHeader.h"
/*Global variable which is also used in other files by taking extern*/
employee *head = NULL , *temp = NULL , *newNode = NULL;

void createList(void)
{
	short int choice,age; /*Variables local to this block*/
	unsigned int sal;
	char bufName[NAMSIZE];
	printf("Enter 1 to create the list and 0 to exit\n");
	scanf("%hd",&choice);
	if(choice == 1)
	{
		printf("Enter the name of the employee \n");
		getchar(); /*To remove the \n of the printf else fgets will not work*/
		fgets(bufName,NAMSIZE,stdin);
		printf("Enter the age of the employee\n");
		scanf("%hd",&age);
		printf("Enter the salary of the employee\n");
		scanf("%u",&sal);
		if(head == NULL)
		{
			head = (employee *)calloc(1,sizeof(employee));
			head->next = NULL;
			head->age = age;
			head->name = strdup(bufName);
			head->salary = sal;
			temp = head;
		}
	}
	else 
		goto last;
	printf("Do you want to create more employee list press 1 or 0 to exit \n");
        scanf("%hd",&choice);
	while(choice == 1)
	{
		bzero(bufName,NAMSIZE);
		printf("Enter the name of the employee \n");
		getchar();
                fgets(bufName,NAMSIZE,stdin);
		printf("Enter the age of the employee\n");
	        scanf("%hd",&age);
        	printf("Enter the salary of the employee\n");
        	scanf("%u",&sal);
		while(temp->next != NULL)
			temp = temp->next;
		newNode = (employee *)calloc(1,sizeof(employee));
		newNode->next = NULL;
		newNode->age = age;
		newNode->name = strdup(bufName);
		newNode->salary = sal;
		temp->next = newNode;
		printf("Do you want to create more employee list press 1 or 0 to exit \n");
		scanf("%hd",&choice);
	}
last :
	printf("Exiting -------------------\n");
}
