/*This file to add member between the node */
#include"myHeader.h"
extern employee *head,*newNode; /*extern from other file*/
void addBetweenList()
{
	short int choice = 0,age,flag=0;
	unsigned int sal;
	char bufName[NAMSIZE];
	employee *first = head , *move = head,*totalList = head;
menu :
	printf("Enter the position you want to insert or 0 to exit \n");
	scanf("%hd",&choice);
	if(choice == 0)
		goto last;
	while(totalList)
	{
		totalList = totalList->next;
		flag++;
	}
	if(choice >= flag)
	{
		printf("Sorry cannot add beyond the list, total list is %hd\n",flag);
		totalList = head;
		flag = 0;
		goto menu;
	}
	if(choice == 1) /*Enter member at first postion */
	{
		bzero(bufName,NAMSIZE);
		printf("Enter the name of the employee \n");
                getchar(); /*To remove the \n of the printf else fgets will not work*/
                fgets(bufName,NAMSIZE,stdin);
		printf("Enter the age of the employee\n");
	        scanf("%hd",&age);
        	printf("Enter the salary of the employee\n");
        	scanf("%u",&sal);
		newNode = (employee *)calloc(1,sizeof(employee));
		newNode->next = first;
		newNode->age = age;
		newNode->name = strdup(bufName);
		newNode->salary = sal;
		head = newNode;	
	}
	else /*Enter member other than fisrt*/
	{
		bzero(bufName,NAMSIZE);
                printf("Enter the name of the employee \n");
                getchar(); /*To remove the \n of the printf else fgets will not work*/
                fgets(bufName,NAMSIZE,stdin);
		printf("Enter the age of the employee\n");
                scanf("%hd",&age);
                printf("Enter the salary of the employee\n");
                scanf("%u",&sal);
		short int j = 1;
		while(j < choice)  /*Moving the pointer 1 less than choice */
		{
			move = move->next;
			j++;
		}
		j = 2;
		while(j < choice) /*Moving the pointer 2 less than choice*/
		{
			first = first->next;
			j++;
		}
		if(choice)
		{	
			newNode = (employee *)calloc(1,sizeof(employee));
			newNode->age = age;
			newNode->name = strdup(bufName);
			newNode->salary = sal;
			newNode->next = move;
			first->next = newNode;				
		}		
	}
last :
	printf("Exiting-----------------------------\n");
	
}
